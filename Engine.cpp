#include "Engine.hpp"


using namespace std;
Engine::~Engine() {};
Engine::Engine()
{

    Window = new sf::RenderWindow(sf::VideoMode(1024,900, 32), "Test");
    view = sf::View();
    backgroundView = sf::View();
    midgroundView = sf::View();

    view.reset(sf::FloatRect(0, 0, 1024, 900));
    backgroundView.reset(sf::FloatRect(0, 0, 1024, 900));
    midgroundView.reset(sf::FloatRect(0, 0, 1024, 900));

    /** Prepare the box2d world */
    b2Vec2 Gravity(0.f, 9.8f);
    listener = new MyContactListener();
    World = new b2World(Gravity,true);
    World->SetContactListener(listener);
    /**Used for debuging*/
    if(debug)
    {
        debugDrawInstance = new DebugDraw(*Window);
        debugDrawInstance->SetFlags( b2DebugDraw::e_shapeBit );
        World->SetDebugDraw( debugDrawInstance );
    }



    CreateGround(*World, 512.f, 800.f);
    CreatePlatform(*World, 300.f,150.f);  ///initail location passed to function
    CreatePlatform(*World, 700.f,450.f);  ///initail location passed to function
    CreatePlatform(*World, 1200.f,650.f);  ///initail location passed to function
    CreatePlatform(*World, 1600.f,250.f);  ///initail location passed to function
    CreatePlatform(*World, 800.f,340.f);  ///initail location passed to function
    //CreatePlayer(*World, 0.f,0.f);
    player = new Player(World, this);

    ///LOAD TEXTURES
    GroundTexture.loadFromFile("ground.png");
    BoxTexture.loadFromFile("box.png");
    // platform.loadFromFile("grass_box/grass_96x96.png");
    platform.loadFromFile("platform1.png");
    //sesfplayerTexture.loadFromFile("spritesheetvolt.png");
    flash.loadFromFile("flash.png");
    flash_blue.loadFromFile("flash_blue.png");
    background.loadFromFile("mountains-bkg.jpg");
    sky.loadFromFile("sky.jpg");
    tree.loadFromFile("tree.png");
    tree1.loadFromFile("tree1.png");
    tree2.loadFromFile("tree2.png");

    frameCounter = 0;
    switchFrame = 1;
    frameSpeed = 60;
    mainLoop();
}

void Engine::mainLoop()
{

    ///MAIN LOOP START
    while (Window->isOpen())
    {
        processInput();

        float elapsed = clock.restart().asSeconds();//
        frameCounter += elapsed;// *frameSpeed;
        //  std::cout << "frame counter:  " << frameCounter << "  Frame speed: " << switchFrame/frameSpeed << "  clock.restart.asSeconds: " << elapsed << std::endl;
        //frameCounter >= switchFrame
        while( (frameCounter >= switchFrame/frameSpeed) )
        {
            update();
            frameCounter -= switchFrame/frameSpeed;
        }
        renderFrame();
    }


};

bool inAir = false;

void Engine::processInput()
{
    sf::Event event;
    while(Window->pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            Window->close();

        //MOUSE INPUT RELEASED
        if (event.type == sf::Event::MouseButtonReleased)
        {
            //   std::cout << "mouse released" << std::endl;
            if(event.mouseButton.button == sf::Mouse::Left)
            {

            }
        }

        //MOUSE INPUT PRESSED
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if(sf::Mouse::isButtonPressed(sf::Mouse::Right))
            {
                std::cout << "platform create"  << std::endl;
                sf::Vector2f mouse = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));

                CreatePlatform(*World,mouse.x,mouse.y);
            }
        }

        //WASD keyboard movement
        if (event.type == sf::Event::KeyPressed)
        {
            if(event.key.code == sf::Keyboard::Escape)
                Window->close();

            if (event.key.code == sf::Keyboard::D)
            {
                std::cout << "D key Pressed" << std::endl;
                b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
                float desiredVel = 7;

                float velChange = desiredVel - vel.x;
                float impulse =  worldBodies["player"]->GetMass() * velChange;
                worldBodies["player"]->ApplyLinearImpulse( b2Vec2(impulse,0), worldBodies["player"]->GetWorldCenter() );
            }

            if (event.key.code == sf::Keyboard::A)
            {
                std::cout << "A key Pressed" <<  std::endl;

                b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
                float desiredVel = -7;

                float velChange = desiredVel - vel.x;
                float impulse =  worldBodies["player"]->GetMass() * velChange; //disregard time factor
                worldBodies["player"]->ApplyLinearImpulse(b2Vec2(impulse,0), worldBodies["player"]->GetWorldCenter() );
            }

            //UP
            if (event.key.code == sf::Keyboard::W)
            {


                std::cout << "W key Pressed" <<  std::endl;
                b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
                //float desiredVel = -4;
                //float velChange = desiredVel - vel.y;
                float impulse =  worldBodies["player"]->GetMass() * -10;
                //cout<< "jump impulse " << impulse << " vel " << vel.x << " "<< vel.y << endl;
                worldBodies["player"]->ApplyLinearImpulse( b2Vec2(0,impulse), worldBodies["player"]->GetWorldCenter() );
                //worldBodies["player"]->


            }
            //DOWN
            if (event.key.code == sf::Keyboard::S)
            {
                //std::cout << "S key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;
                //worldBodies["player"]->ApplyForce( b2Vec2(0,500), worldBodies["player"]->GetWorldCenter() );
                //sf::Mouse::setPosition(sf::Vector2i(sf::Mouse::getPosition().x + 10,sf::Mouse::getPosition().y),*Window);

                view.move(10,0);
                backgroundView.move(5,0);
            }

            if (event.key.code == sf::Keyboard::W)
            {
                //                std::cout << "S key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;
                //
                //                worldBodies["player"]->ApplyForce( b2Vec2(0,500), worldBodies["player"]->GetWorldCenter() );
                //sf::Mouse::setPosition(sf::Vector2i(sf::Mouse::getPosition().x - 10,sf::Mouse::getPosition().y),*Window);

                view.move(-10,0);
                backgroundView.move(-5,0);
            }

            if (event.type == sf::Event::Resized)
                Window->setView(sf::View(sf::FloatRect(0.f, 0.f, static_cast<float>(Window->getSize().x) ,static_cast<float>(Window->getSize().y) ) ) );
            // b2Vec2 vel = body->GetLinearVelocity();
            //    float desiredVel = 0;
            //    switch ( moveState )
            //    {
            //      case MS_LEFT:  desiredVel = -5; break;
            //      case MS_STOP:  desiredVel =  0; break;
            //      case MS_RIGHT: desiredVel =  5; break;
            //    }
            //    float velChange = desiredVel - vel.x;
            //    float impulse = body->GetMass() * velChange; //disregard time factor
            //    body->ApplyLinearImpulse( b2Vec2(impulse,0), body->GetWorldCenter() );

        }

        if (event.type == sf::Event::KeyReleased)
        {

            if (event.key.code == sf::Keyboard::W)
            {

            }

        }

    } //END OF WHILE POLL EVENT LOOP
};

void Engine::update()
{
//TELEPORT MATH
    if(debug)
        Window->clear(sf::Color::White);

    World->Step(1/60.f, 8, 3);



};

void Engine::renderFrame()
{

    Window->clear(sf::Color::White);
    World->DrawDebugData();
    sf::Sprite backgroundSprite;
    sf::Sprite backgroundSpriteFill;
    sf::Sprite skySprite;
    sf::Sprite treeSprite;
    sf::Sprite treeSprite1;
    sf::Sprite treeSprite2;

    backgroundSprite.setTexture(background);
    backgroundSpriteFill.setTexture(background);
    skySprite.setTexture(sky);
    treeSprite.setTexture(tree);
    treeSprite1.setTexture(tree1);
    treeSprite2.setTexture(tree2);

    backgroundSpriteFill.setPosition(1300,0);
    skySprite.setPosition(0,-800);
    treeSprite.setPosition(2000,300);
    treeSprite1.setPosition(900,450);
    treeSprite2.setPosition(1400,550);
    //cout << " X: " << backgroundView.getCenter().x << " Y: " << backgroundView.getCenter().y << endl;
    //cout << "background size x: " << backgroundView.getSize().x<< endl;
    backgroundView.setCenter(0,0);
    backgroundView.move( (( (worldBodies["player"]->GetPosition().x*SCALE)+Window->getSize().x*2) /4 ),((worldBodies["player"]->GetPosition().y*SCALE)+Window->getSize().y*2-150) /4  );

    Window->setView(backgroundView);
    if(!debug)
    {
        Window->draw(backgroundSpriteFill);
        Window->draw(backgroundSprite);
        Window->draw(skySprite);
    }
    midgroundView.setCenter(0,0);
    midgroundView.move( (( (worldBodies["player"]->GetPosition().x*SCALE)+Window->getSize().x*2) /2 ),((worldBodies["player"]->GetPosition().y*SCALE)) /2  );
    Window->setView(midgroundView);
    Window->draw(treeSprite);
    Window->draw(treeSprite1);
    Window->draw(treeSprite2);

    //SET NORMAL VIEW
    view.setCenter(0,0);
    view.move(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE-300);
    //cout << "player location x: " << worldBodies["player"]->GetPosition().x << "player location y: " << worldBodies["player"]->GetPosition().y << endl;
    Window->setView(view);

    int BodyCount = 0;
    sf::Sprite playerSprite;
    for (b2Body* BodyIterator = World->GetBodyList(); BodyIterator != 0; BodyIterator = BodyIterator->GetNext())
    {
        sf::Sprite Sprite;

        sf::Sprite GroundSprite;
        sf::Sprite platformSprite;

        //sf::CircleShape shape(teleport_Distance);
        switch( (int) BodyIterator->GetUserData() )
        {
        case 13:
            platformSprite.setTexture(platform);
            //platformSprite.setTextureRect(r1);
            platformSprite.setOrigin(400.f,200.f);
            platformSprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
            platformSprite.setRotation(180/b2_pi * BodyIterator->GetAngle());
            platformSprite.setScale(.4,.6);
            Window->draw(platformSprite);
            break;
        case 1:
            player->render();
            break;
        case 7:
            Sprite.setTexture(BoxTexture);
            Sprite.setOrigin(16.f, 16.f);
            Sprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
            Sprite.setRotation(BodyIterator->GetAngle() * 180/b2_pi);
            Window->draw(Sprite);
            ++BodyCount;
            break;
        case 9:
            GroundSprite.setTexture(GroundTexture);
            GroundSprite.setOrigin(512.f, 8.f);
            GroundSprite.setPosition(BodyIterator->GetPosition().x * SCALE, BodyIterator->GetPosition().y * SCALE);
            GroundSprite.setRotation(180/b2_pi * BodyIterator->GetAngle());
            Window->draw(GroundSprite);
            break;
        }
    }
    Window->draw(player->playerSprite);


    Window->display();
    // debugDrawInstance->window->display();

};

void Engine::CreateGround(b2World& World, float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/SCALE, Y/SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = World.CreateBody(&BodyDef);

    int id = 9;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((1024*2.f)/SCALE, (16.f/2)/SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 0.f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}

void Engine::CreatePlatform(b2World& World, float pos_x, float pos_y   )
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(pos_x/SCALE, pos_y/SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = World.CreateBody(&BodyDef);

    int id = 13;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((800*.4f/2)/SCALE, (300*.6f/2)/SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 100.f;
    FixtureDef.friction = 0.7f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}








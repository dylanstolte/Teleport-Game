#include "Engine.hpp"

using namespace std;
Engine::~Engine(){};
Engine::Engine()
{
    Window = new sf::RenderWindow(sf::VideoMode(1024,900, 32), "Test");
    view = sf::View();
    backgroundView = sf::View();
    view.reset(sf::FloatRect(0, 0, 1024, 900));
    backgroundView.reset(sf::FloatRect(0, 0, 1024, 900));

        /** Prepare the box2d world */
    b2Vec2 Gravity(0.f, 9.8f);
    World = new b2World(Gravity,true);
    CreateGround(*World, 512.f, 800.f);
    CreatePlatform(*World, 300.f,150.f);  ///initail location passed to function
    CreatePlatform(*World, 700.f,450.f);  ///initail location passed to function
    CreatePlatform(*World, 1200.f,650.f);  ///initail location passed to function
    CreatePlatform(*World, 1600.f,250.f);  ///initail location passed to function
    CreatePlatform(*World, 800.f,340.f);  ///initail location passed to function
    CreatePlayer(*World, 0.f,0.f);

//LOAD TEXTURES
    GroundTexture.loadFromFile("ground.png");
    BoxTexture.loadFromFile("box.png");
    platform.loadFromFile("grass_box/grass_96x96.png");
    player.loadFromFile("crate.png");
    flash.loadFromFile("flash.png");
    flash_blue.loadFromFile("flash_blue.png");
    background.loadFromFile("mountains-bkg.jpg");
    sky.loadFromFile("sky.jpg");


    frameCounter = 0;
    switchFrame = 1;
    frameSpeed = 60;
    mainLoop();
}

void Engine::mainLoop()
{

    //MAIN LOOP START
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
                std::cout << "D key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;
                b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
                float desiredVel = 7;

                float velChange = desiredVel - vel.x;
                float impulse =  worldBodies["player"]->GetMass() * velChange;
                worldBodies["player"]->ApplyLinearImpulse( b2Vec2(impulse,0), worldBodies["player"]->GetWorldCenter() );
            }

            if (event.key.code == sf::Keyboard::A)
            {
                std::cout << "A key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;

                b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
                float desiredVel = -7;

                float velChange = desiredVel - vel.x;
                float impulse =  worldBodies["player"]->GetMass() * velChange; //disregard time factor
                worldBodies["player"]->ApplyLinearImpulse(b2Vec2(impulse,0), worldBodies["player"]->GetWorldCenter() );
            }

           //UP
            if (event.key.code == sf::Keyboard::Space)
            {
                std::cout << "W key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;
                                    b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();

                float desiredVel = -4;

                float velChange = desiredVel - vel.y;
                float impulse =  worldBodies["player"]->GetMass() * velChange;
                worldBodies["player"]->ApplyLinearImpulse( b2Vec2(0,impulse), worldBodies["player"]->GetWorldCenter() );
            }
            //DOWN
            if (event.key.code == sf::Keyboard::S)
            {
                //                std::cout << "S key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;
                //
                //                worldBodies["player"]->ApplyForce( b2Vec2(0,500), worldBodies["player"]->GetWorldCenter() );
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
    } //END OF WHILE POLL EVENT LOOP
};

void Engine::update()
{
//TELEPORT MATH



        World->Step(1/60.f, 8, 3);
};

void Engine::renderFrame()
{
        Window->clear(sf::Color::White);

        backgroundView.setCenter(( (worldBodies["player"]->GetPosition().x*SCALE)+(Window->getSize().x/2) ) /4 ,(worldBodies["player"]->GetPosition().y*SCALE) /4  );
        Window->setView(backgroundView);

        sf::Sprite backgroundSprite;
        sf::Sprite backgroundSpriteFill;
        sf::Sprite skySprite;
        skySprite.setTexture(sky);
        backgroundSprite.setTexture(background);
        backgroundSpriteFill.setTexture(background);

        backgroundSpriteFill.setPosition(1300,0);
        skySprite.setPosition(0,-800);
       // cout << " X: " << backgroundView.getCenter().x << " Y: " << backgroundView.getCenter().y << endl;
    //    cout << "background size x: " << backgroundView.getSize().x<< endl;


        Window->draw(backgroundSpriteFill);
        Window->draw(backgroundSprite);
        Window->draw(skySprite);


        //SET NORMAL VIEW
        view.setCenter(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE);
       // cout << "player location x: " << worldBodies["player"]->GetPosition().x << "player location y: " << worldBodies["player"]->GetPosition().y << endl;
        Window->setView(view);
        Window->setView(view);

        int BodyCount = 0;
        for (b2Body* BodyIterator = World->GetBodyList(); BodyIterator != 0; BodyIterator = BodyIterator->GetNext())
        {
                  sf::Sprite Sprite;
                  sf::Sprite GroundSprite;
                  sf::Sprite platformSprite;
                  sf::Sprite playerSprite;
                 // sf::CircleShape shape(teleport_Distance);
            switch( (int) BodyIterator->GetUserData() ){
            case 1:
                    playerSprite.setTexture(player);
                    playerSprite.setOrigin(24.f,24.f);
                    playerSprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
                    playerSprite.setRotation(BodyIterator->GetAngle() * 180/b2_pi);
                    Window->draw(playerSprite);
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
            case 13:
                platformSprite.setTexture(platform);
              //  platformSprite.setTextureRect(r1);
                platformSprite.setOrigin(48.f,48.f);
                platformSprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
                platformSprite.setRotation(180/b2_pi * BodyIterator->GetAngle());
                Window->draw(platformSprite);
                break;
            }
        }
        Window->display();

};

void Engine::CreatePlayer(b2World& World, float pos_x, float pos_y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(pos_x/SCALE, pos_y/SCALE);
    BodyDef.type = b2_dynamicBody;
    b2Body* Player = World.CreateBody(&BodyDef);
    //add body to world map
    worldBodies["player"] =  Player;
    int id = 1;
    Player->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((48.f/2)/SCALE, (48.f/2)/SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 3.f;
    FixtureDef.friction = 1.f;
    FixtureDef.shape = &Shape;
    Player->CreateFixture(&FixtureDef);
}

void Engine::CreateBox(b2World& World, int MouseX, int MouseY)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(MouseX/SCALE, MouseY/SCALE);
    BodyDef.type = b2_dynamicBody;
    b2Body* Box= World.CreateBody(&BodyDef);

    int id = 7;
    Box->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((32.f/2)/SCALE, (32.f/2)/SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 1.f;
    FixtureDef.friction = 1.4f;
    FixtureDef.shape = &Shape;
    Box->CreateFixture(&FixtureDef);
}

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
    Shape.SetAsBox((96.f/2)/SCALE, (96.f/2)/SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 100.f;
    FixtureDef.friction = 0.7f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}







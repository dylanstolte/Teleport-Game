#include "Engine.hpp"


using namespace std;
Engine::~Engine() {};
Engine::Engine()
{

    Window = new sf::RenderWindow(sf::VideoMode(1024,900, 32), "Test");
    Window->setVerticalSyncEnabled(true);
    view = sf::View();
    backgroundView = sf::View();
    midgroundView = sf::View();

    view.reset(sf::FloatRect(0, 0, 1024, 900));
    backgroundView.reset(sf::FloatRect(0, 0, 1024, 900));
    midgroundView.reset(sf::FloatRect(0, 0, 1024, 900));

    /**Load the Assets*/
    assetLoader = new AssetLoader();

    /** Prepare the box2d world */
    b2Vec2 Gravity(0.f, 9.8f);
    listener = new MyContactListener(this);
    worldMap = new Map(this);
    World = new b2World(Gravity,true);
    World->SetContactListener(listener);
    /**Used for debuging*/
    if(debug)
    {
        debugDrawInstance = new DebugDraw(*Window);
        debugDrawInstance->SetFlags( b2DebugDraw::e_shapeBit );
        World->SetDebugDraw( debugDrawInstance );
    }



    worldMap->CreateGround(512.f, 800.f);
    player = new Player(World, this);
    enemy = new Enemy(World,this,100,100);
    enemy = new Enemy(World,this,200,200);

    ///LOAD TEXTURES
//    GroundTexture.loadFromFile("ground.png");
//    BoxTexture.loadFromFile("box.png");
//    // platform.loadFromFile("grass_box/grass_96x96.png");
//    platform.loadFromFile("platform1.png");
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

    /**PROTYPE NEW INPUT*/
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        moveJump = true;
    }
    else
    {
        moveJump = false;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        moveRight = true;
    }
    else
    {
        moveRight = false;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        moveLeft = true;
    }
    else
    {
        moveLeft = false;
    }

    /***Start the Event Loop*/
    sf::Event event;
    sf::Event prevEvent;
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

                worldMap->placeObject(worldMap->selection,mouse.x,mouse.y);

            }
        }

        //WASD keyboard movement
        if (event.type == sf::Event::KeyPressed)
        {
            if(event.key.code == sf::Keyboard::Escape)
                Window->close();


            //DOWN
            if (event.key.code == sf::Keyboard::S)
            {
                //std::cout << "S key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;
                //worldBodies["player"]->ApplyForce( b2Vec2(0,500), worldBodies["player"]->GetWorldCenter() );
                //sf::Mouse::setPosition(sf::Vector2i(sf::Mouse::getPosition().x + 10,sf::Mouse::getPosition().y),*Window);

                view.move(10,0);
                backgroundView.move(5,0);
            }

            if (event.key.code == sf::Keyboard::Space)
            {
                player->attack = true;
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

        /**Released Key Events*/

        if (event.type == sf::Event::KeyReleased)
        {

            if (event.key.code == sf::Keyboard::Up)
            {
                worldMap->selection++;
                std::cout<< worldMap->selection << std::endl;
            }
            if (event.key.code == sf::Keyboard::Down)
            {
                worldMap->selection--;
                std::cout<< worldMap->selection << std::endl;
            }
            if (event.key.code == sf::Keyboard::Space)
            {
                player->attack = false;
            }

        }

        prevEvent=event;
    } //END OF WHILE POLL EVENT LOOP
};

void Engine::update()
{
    enemy->moveOnPath();

    // cout<<player->numFootContacts<<endl;
    if(player->numFootContacts > 0)
    {
        player->grounded = false;
        player->inAir = false;
    }
    else
    {
        player->grounded = true;
        player->inAir = true;

        //cout<<"inair"<<endl;
    }


    if(moveJump)
    {
        if(player->numFootContacts > 0)
        {

            //std::cout << "W key Pressed" <<  std::endl;
            b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
            float desiredVel = -5.5;
            float velChange = desiredVel - vel.y;
            float impulse =  worldBodies["player"]->GetMass() * velChange;
            worldBodies["player"]->ApplyLinearImpulse( b2Vec2(0,impulse), worldBodies["player"]->GetWorldCenter() );
            //worldBodies["player"]->SetLinearVelocity(b2Vec2(vel.x,-2);
            //   moveJump = false;
            jumpAnimation = true;
        }

    }
    if(moveRight)
    {
        //std::cout << "D key Pressed" << std::endl;
        b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
        float desiredVel = 7;

        float velChange = desiredVel - vel.x;
        float impulse =  worldBodies["player"]->GetMass() * velChange;
        worldBodies["player"]->ApplyLinearImpulse( b2Vec2(impulse,0), worldBodies["player"]->GetWorldCenter() );
    }
    if(moveLeft)
    {

        b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
        float desiredVel = -7;

        float velChange = desiredVel - vel.x;
        float impulse =  worldBodies["player"]->GetMass() * velChange; //disregard time factor
        worldBodies["player"]->ApplyLinearImpulse(b2Vec2(impulse,0), worldBodies["player"]->GetWorldCenter() );
    }



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


    worldMap->render();
    enemy->render();
    player->render();



    Window->draw(player->playerSprite);
    // Window->draw(worldMap->groundSprite);
   // std::map<std::string,sf::Sprite>::iterator it=assetLoader->spriteMap.begin();
   // std::cout << assetLoader->spriteMap["ginso_0"].getTextureRect().left << std::endl;
    Window->draw(assetLoader->spriteMap["ruins_2"]);
  //  Window->draw(assetLoader->spriteMap["ginso_1"]);
   // Window->draw(assetLoader->spriteMap["mountain_2"]);

    Window->display();
    // debugDrawInstance->window->display();

};











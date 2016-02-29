#include "Engine.hpp"
#include <string>
#include <sstream>

using namespace std;
Engine::~Engine() {};
Engine::Engine()
{

    Window = new sf::RenderWindow(sf::VideoMode(1024,900, 32), "Test");
   // Window->setVerticalSyncEnabled(true);
    view = sf::View();
    view.setCenter(0,0);
    Window->setView(view);

    backgroundView = sf::View();
    midgroundView = sf::View();

    view.reset(sf::FloatRect(0, 0, 1024, 900));
    backgroundView.reset(sf::FloatRect(0, 0, 1024, 900));
    midgroundView.reset(sf::FloatRect(0, 0, 1024, 900));



    /** Prepare the box2d world */
    b2Vec2 Gravity(0.f, 9.8f);
    listener = new MyContactListener(this);

    World = new b2World(Gravity,true);
    worldMap = new Map(this);
    World->SetContactListener(listener);
    /**Used for debuging*/
    if(debug)
    {
        debugDrawInstance = new DebugDraw(*Window);
        debugDrawInstance->SetFlags( b2DebugDraw::e_shapeBit );
        World->SetDebugDraw( debugDrawInstance );
    }
  /**Load the Assets*/
        assetLoader = new AssetLoader(this);

    worldMap->CreateGround(512.f, 800.f);
    player = new Player(World, this);
    enemy = new Enemy(World,this,100,100);
    enemy = new Enemy(World,this,200,200);

    mapBuilder = new MapBuilder(this);

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
             //   std::cout << "platform create"  << std::endl;
                sf::Vector2f mouse = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));

                worldMap->placeObject(assetLoader->selection,mouse.x,mouse.y);

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
                assetLoader->selection++;
                std::cout<< assetLoader->selection << std::endl;
            }
            if (event.key.code == sf::Keyboard::Down)
            {
                assetLoader->selection--;
                std::cout<< assetLoader->selection << std::endl;
            }
            if (event.key.code == sf::Keyboard::Space)
            {
                player->attack = false;
                player->attackPos = 0;
            }
            //place point
            if (event.key.code == sf::Keyboard::P)
            {
                sf::Vector2f mouse = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));

                if(mapBuilder->anchor1 && mapBuilder->anchor2)
                {
                    mapBuilder->anchor1 = false;
                    mapBuilder->anchor2 = false;
                }

                if(mapBuilder->anchor1 && !mapBuilder->anchor2)
                {
                    mapBuilder->anchorPoint2.x = mouse.x;
                    mapBuilder->anchorPoint2.y = mouse.y;
                    mapBuilder->anchor2 = true;
                }
                if(!mapBuilder->anchor1)
                {
                    mapBuilder->anchorPoint1.x = mouse.x;
                    mapBuilder->anchorPoint1.y = mouse.y;
                    mapBuilder->anchor1 = true;
                }

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

    //  Window->setView(backgroundView);

    //render box with mouse x,y position
    sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
    {
        // error...
    }

    sf::Text text;
    sf::Text text2;

    // select the font
    text.setFont(font); // font is a sf::Font
    text2.setFont(font);
    // set the string to display
    sf::Vector2i mouse = sf::Mouse::getPosition(*Window);
    sf::Vector2f mouseWorld = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));

    char mousex[50];
    char mousey[50];
    sprintf(mousex, "%d", mouse.x);
    sprintf(mousey, "%d", mouse.y);

  //  std::cout << mouseWorld.x << mouseWorld.y << std::endl;

    int score = mouseWorld.x; // the score to print
    int score1 = mouseWorld.y;

    std::stringstream ss;  // #include <sstream>
    ss << score;


    std::stringstream ss1;  // #include <sstream>
    ss1 << score1;


    text2.setString("Window coords: \n x: " + (std::string)mousex + " y: " + mousey);

    text.setString("World Coords: \n x: " + (std::string) ss.str().c_str() + " y: " + (std::string) ss1.str().c_str() );
    // set the character size
    text.setCharacterSize(15); // in pixels, not points!
    text2.setCharacterSize(15);
    // set the color
    text.setColor(sf::Color::Blue);
    text2.setColor(sf::Color::Cyan);
   // sf::Vector2f mouse = Window->mapPixelToCoords
    text.setPosition(Window->mapPixelToCoords(sf::Vector2i(70,0)));
    text2.setPosition(Window->mapPixelToCoords(sf::Vector2i(200,0)));
    Window->draw(text);
    Window->draw(text2);
//    if(!debug)
//    {
//        Window->draw(backgroundSpriteFill);
//        Window->draw(backgroundSprite);
//        Window->draw(skySprite);
//    }
    //SET NORMAL VIEW
    view.setCenter(0,0);
   view.move(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE-300);
    //cout << "player location x: " << worldBodies["player"]->GetPosition().x << "player location y: " << worldBodies["player"]->GetPosition().y << endl;
    Window->setView(view);

   int pos_x = 0;
   int pos_y = 0;

    sf::Vector2i temp1 = Window->mapCoordsToPixel(sf::Vector2f(pos_x,pos_y));
    sf::Vector2f temp =  Window->mapPixelToCoords(sf::Vector2i(pos_x,pos_y));
  //  sf::Vector2f temp = b2Vec2((pos_x)/engine->SCALE, (pos_y)/engine->SCALE);
    std::cout << "passeds" << pos_x << " " << pos_y << std::endl;
    std::cout << "coords to pix" << temp1.x << " " << temp1.y << std::endl;
    std::cout << "pix to coords" << temp.x << " " << temp.y << std::endl;

    worldMap->render();
    enemy->render();
    player->render();

    mapBuilder->render(mouse.x,mouse.y);
    Window->draw(player->playerSprite);

    Window->display();
    // debugDrawInstance->window->display();
};



template <typename T>
std::string Engine::ToString(T val)
{
    std::stringstream stream;
    stream << val;
    return stream.str();
}






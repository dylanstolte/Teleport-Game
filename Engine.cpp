#include "Engine.hpp"
#include <string>
#include <sstream>

using namespace std;
Engine::~Engine()
{
    b2Free(joints);
    b2Free(bodies);
    joints = NULL;
    bodies = NULL;
};
Engine::Engine()
{

    Window = new sf::RenderWindow(sf::VideoMode(1024,900, 32), "Test");
    // Window->setVerticalSyncEnabled(true);
    view = sf::View();
    Window->setView(view);

    backgroundView = sf::View();
    midgroundView = sf::View();

    view.reset(sf::FloatRect(0, 0, 1200, 900));
    backgroundView.reset(sf::FloatRect(0, 0, 1200, 900));
    midgroundView.reset(sf::FloatRect(0, 0, 1200, 900));



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

    //  worldMap->CreateGround(512.f, 800.f);
    player = new Player(World, this);
    //  enemy = new Enemy(World,this,100,100);
    //  enemy = new Enemy(World,this,200,200);

    mapBuilder = new MapBuilder(this);
    ScriptBuiltMap = new scriptBuiltMap(this);
    ScriptBuiltMap->load();

    ///LOAD TEXTURES
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


//view.zoom(2);

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

        if(player->numFootContacts > 0 && !moveJump && jumpRelease)
        {
            moveJump = true;
            std::cout << "Jump" << std::endl;
            jumpCount++;
            doubleJump = false;
        }


        if(doubleJump && jumpRelease)
        {
            moveJump = true;
            std::cout << "double Jump" << std::endl;
        }



        std::cout << "pressed"  << std::endl;

        jumpRelease = false;
    }
    else
    {

        jumpRelease = true;
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

    if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {

        //  std::cout << "pressed" << std::endl;

        if(mouseLeft && mapBuilder->enabledrawbox)
        {
            //    std::cout << "held" << std::endl;

            sf::Vector2f mouse = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));
            mapBuilder->drawbox = true;


        }
        else
        {
            if(mapBuilder->enabledrawbox)
            {
                mouseLeft = true;
                sf::Vector2f mouse = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));
                mapBuilder->rectangleStart = sf::Vector2f(mouse);
            }

        }



    }
    else
    {
        if(mouseLeft)
        {
            mouseLeft = false;
            //   std::cout << "released " << std::endl;
            worldMap->createBodyBox(mapBuilder->rect.getPosition().x+(mapBuilder->rect.getSize().x/2),
                                    mapBuilder->rect.getPosition().y+(mapBuilder->rect.getSize().y/2),
                                    abs(mapBuilder->rect.getSize().x),
                                    abs(mapBuilder->rect.getSize().y),21);
        }

        //  std::cout << "Create body Box from sf:: blu box" << std::endl;
        mapBuilder->drawbox = false;
    }

    /***Start the Event Loop*/
    sf::Event event;
    sf::Event prevEvent;
    while(Window->pollEvent(event))
    {

        if(event.type == sf::Event::Closed)
            Window->close();

        //MOUSE INPUT PRESSED
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if(sf::Mouse::isButtonPressed(sf::Mouse::Right))
            {
                //   std::cout << "platform create"  << std::endl;
                sf::Vector2f mouse = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));

                worldMap->placeObject(assetLoader->spriteSelection,mouse.x,mouse.y);

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
                //   backgroundView.move(5,0);
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


            /** ASSET LOADER CONTROL */
            if (event.key.code == sf::Keyboard::Up)
            {
                assetLoader->spriteSelection++;
                //  std::cout<< assetLoader->selection << std::endl;
            }
            if (event.key.code == sf::Keyboard::Down)
            {
                assetLoader->spriteSelection--;
                // std::cout<< assetLoader->selection << std::endl;
            }
            if (event.key.code == sf::Keyboard::Right)
            {
                assetLoader->spriteSheetSelection++;
                //  std::cout<< assetLoader->selection << std::endl;
            }
            if (event.key.code == sf::Keyboard::Left)
            {
                assetLoader->spriteSheetSelection--;
                //std::cout<< assetLoader->selection << std::endl;
            }
            /** END ASSET LOADER CONTROL */

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
            if(event.key.code == sf::Keyboard::B)
            {
                if(mapBuilder->enabledrawbox)
                    mapBuilder->enabledrawbox = false;
                else
                    mapBuilder->enabledrawbox = true;
            }

        }

        prevEvent=event;
    } //END OF WHILE POLL EVENT LOOP
};

void Engine::update()
{
    /**  */




    /** */
    // enemy->moveOnPath();
    // cout<<player->numFootContacts<<endl;

    if(player->dead)
    {
        //     player->respawn(player->checkpointPos);
    }


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
        {
            b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
            float desiredVel = -10;
            float velChange = desiredVel - vel.y;
            float impulse =  worldBodies["player"]->GetMass() * velChange;
            //  worldBodies["player"]->ApplyLinearImpulse( b2Vec2(0,impulse), worldBodies["player"]->GetWorldCenter() );
            worldBodies["player"]->SetLinearVelocity(b2Vec2(vel.x,-7));
            moveJump = false;
            jumpAnimation = true;

            if(doubleJump)
                doubleJump = false;
            else
                doubleJump = true;
        }

    }
    //for variable jump height
    if(jumpRelease)
    {
        if(worldBodies["player"]->GetLinearVelocity().y < 0)
        {
            if(worldBodies["player"]->GetLinearVelocity().y < -3.5)
                worldBodies["player"]->SetLinearVelocity(b2Vec2(worldBodies["player"]->GetLinearVelocity().x,-3.5));
        }
    }

    b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();
    if (moveLeft)
    {

        player->bodyFixture->SetFriction(0);

        if(player->numFootContacts > 0)
        {
            if (vel.x > 0)
            {
                worldBodies["player"]->SetLinearVelocity(b2Vec2(vel.x-player->dec,vel.y));
                //  xsp -= player->dec;
            }
            else if (vel.x > -10)
            {
                worldBodies["player"]->SetLinearVelocity(b2Vec2(vel.x-player->acc,vel.y));
                //xsp = xsp-player->acc;
            }
        }else if (vel.x > -10)
            worldBodies["player"]->SetLinearVelocity(b2Vec2(vel.x-player->acc,vel.y));

    }
    else if (moveRight)
    {
        player->bodyFixture->SetFriction(0);

        if(player->numFootContacts > 0)
        {
            if (vel.x < 0)
            {
                worldBodies["player"]->SetLinearVelocity(b2Vec2(vel.x+player->dec,vel.y));
            }
            else if (vel.x < 10)
            {
                worldBodies["player"]->SetLinearVelocity(b2Vec2(vel.x+player->acc,vel.y));
            }
        }
       else if (vel.x < 10)
           worldBodies["player"]->SetLinearVelocity(b2Vec2(vel.x+player->acc,vel.y));

    } //else xsp = xsp-minimum(absolute(xsp), frc)*sign(xsp);
    else
    {
        player->bodyFixture->SetFriction(30);
    }



    if(debug)
        Window->clear(sf::Color::White);

    World->Step(1/60.f, 8, 3);



};

void Engine::renderFrame()
{
    Window->clear(sf::Color::White);
    World->DrawDebugData();

    //this call uses tons of cycle time loop runs ~100 slower
    displayMouseCoords();
    displayAssetSelection();

    //CAMERA CONTROLS
    //  if(worldBodies["player"]->GetPosition().y*SCALE < 500)
    {
        //      view.setCenter(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE);
    }
    //  else
    {
        view.setCenter(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE);
    }


    Window->setView(view);

    sf::Vector2f mouseWorld = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));

    // enemy->render();
    worldMap->render();
    mapBuilder->render(mouseWorld.x,mouseWorld.y);
    player->render();

    /**RANDOM DRAW CALLS*/



    /** CALL TO DISPLAY */
    Window->display();
};
void Engine::displayAssetSelection()
{
    sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
    {
        std::cout << "Error loading font to displayMouseCoords " << std::endl;
    }
    sf::Text text;
    text.setFont(font);
    //dont go out of vector range
    if(assetLoader->spriteSheetSelection < 0)
        assetLoader->spriteSheetSelection = 0;
    if(assetLoader->spriteSheetSelection >= assetLoader->assetFileNames.size())
        assetLoader->spriteSheetSelection = assetLoader->assetFileNames.size() -1;

    std::string asset = assetLoader->getBaseFilename(assetLoader->assetFileNames.at(assetLoader->spriteSheetSelection));
    //std::cout << "assset" << asset << std::endl;

    char str[50];
    sprintf(str, "%d", assetLoader->spriteSelection);

    text.setString("AssetLoader: \nSprite Sheet : " + asset + " Sprite_sel: " + str);
    text.setCharacterSize(15);
    text.setColor(sf::Color::Black);
    text.setPosition(Window->mapPixelToCoords(sf::Vector2i(300,0)));

    sf::Sprite temp(assetLoader->spriteMap[asset + "_" + str]);
    sf::Vector2f mouseWorld = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));
    temp.setPosition(mouseWorld);

    Window->draw(temp);
    Window->draw(text);
}

void Engine::displayMouseCoords()
{
    sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
    {
        std::cout << "Error loading font to displayMouseCoords " << std::endl;
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
}


template <typename T>
std::string Engine::ToString(T val)
{
    std::stringstream stream;
    stream << val;
    return stream.str();
}






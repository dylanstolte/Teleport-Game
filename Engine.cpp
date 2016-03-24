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

    delete player;
    delete listener;
    delete worldMap;
    delete assetLoader;
    delete mapBuilder;
    delete debugDrawInstance;
};
Engine::Engine()
{
    Window = new sf::RenderWindow(sf::VideoMode(1920,1080, 32), "Test");
    //Window->setVerticalSyncEnabled(true);

    view = sf::View();
    view.setCenter(1,1);
    int cameraZoom = 1;

    view.reset(sf::FloatRect(1, 1, 1920, -1080));


    /** Prepare the box2d world */
    b2Vec2 Gravity(0.f, 9.8f);
    //Declare listener before applying it to world;
    listener = new MyContactListener(this);

    /**Load the world from RUBE generated json file*/
    string errorMsg;
    //  b2dJson json;
    //read json file and set as b2World
    World = json.readFromFile("PrototypeA.json", errorMsg);
    std::cout << errorMsg << std::endl;

    worldMap = new Map(this);

    /**Apply contact listener to world**/
    World->SetContactListener(listener);

    /**Used for debuging*/
    if(debug)
    {
        debugDrawInstance = new DebugDraw(*Window);
        debugDrawInstance->SetFlags( b2Draw::e_shapeBit );
        World->SetDebugDraw( debugDrawInstance );
    }

    /**Load the Assets*/
    assetLoader = new AssetLoader(this);

    /** More Initilization*/
    player = new Player(World, this);
    mapBuilder = new MapBuilder(this);
    worldMap->createEnemy();


    /** Load json images into sf::spritemap in map class */
    //get all json images
    json.getAllImages(worldMap->jsonImages);
    //assign to map
    worldMap->jsonImageToMapSprites();

    /** FPS timer vars*/
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

        //if on the ground & jump isnt already true
//        if(player->numFootContacts > 0 && !moveJump)
//        {
//             moveJump = true;
//            //jump
//            std::cout << "Jump" << std::endl;
//        }


        //if in the air
            //if you havent double jumped
                //double jump
            //if you have double jumped
                //do nothing

        if(player->numFootContacts > 0 && !moveJump && jumpRelease)
        {
            moveJump = true;
            std::cout << "Jump press" << std::endl;
            jumpCount++;

        }

        if(doubleJumpReset && player->numFootContacts == 0 && jumpRelease )
            //if no jump and y < 0
            //allow double
        {
            doDoubleJump = true;
            std::cout << "double Jump" << std::endl;
            doubleJumpReset = false;
        }

        jumpRelease = false;

    }
    else
    {

        jumpRelease = true;

    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        moveRight = true;
        moveStop = false;
    }
    else
    {

        moveRight = false;
        if(!moveLeft)
            moveStop = true;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        moveLeft = true;
        moveStop = false;
    }
    else
    {
        moveLeft = false;
        if(!moveRight)
            moveStop = true;
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
                view.move(10,0);
            }

            if (event.key.code == sf::Keyboard::Space)
            {
                player->attack = true;
            }
            if (event.key.code == sf::Keyboard::Return)
            {
                player->dash = true;
                std::cout << "dash" << std::endl;
            }

            if (event.type == sf::Event::Resized)
                Window->setView(sf::View(sf::FloatRect(0.f, 0.f, static_cast<float>(Window->getSize().x) ,static_cast<float>(Window->getSize().y) ) ) );
        }

        /**Released Key Events*/

        if (event.type == sf::Event::KeyReleased)
        {
            /** other key events*/
            if (event.key.code == sf::Keyboard::Y)
            {
                view.zoom(1.5);
            }

            if (event.key.code == sf::Keyboard::T)
            {
                view.zoom(.5);
            }
            if (event.key.code == sf::Keyboard::Space)
            {


                player->attack = false;
                player->attackPos = 0;
            }
            if (event.key.code == sf::Keyboard::Return)
            {
                player->dash = false;
                //  player->attackPos = 0;
            }


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
            if (event.key.code == sf::Keyboard::I)
            {
                std::cout << "Insert selected asset" << std::endl;
                addAssetToWorldMap();
            }
//            /** END ASSET LOADER CONTROL */


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

    //update player state
    worldMap->update();
    player->update();

    if(debug)
        Window->clear(sf::Color(100,100,100,0));
    // Window->clear(sf::Color::White);

    World->Step(1/60.f, 8, 3);
    //remove sheduled enemies
    for (int i = 0; i < enemyScheduledForRemoval.size(); i++)
    {
        std::cout << "remove enemy" << std::endl;
        //enemy class scheduled for removal
        Enemy* temp = enemyScheduledForRemoval.at(i);
        //call enemy class destructor
        delete temp;
        std::cout << "removal completed" << std::endl;
        // set enemy pointer in engine class to null
        worldMap->enemy = NULL;
        std::cout << "pointer null completed" << std::endl;
    }

    enemyScheduledForRemoval.clear();



};

void Engine::renderFrame()
{

    Window->clear(sf::Color::White);
//    Window->setView(worldMap->backgroundView);
    //  Window->draw(worldMap->backgroundSprite);

    Window->setView(view);

    //this call uses tons of cycle time
     // displayMouseCoords();
    //  displayAssetSelection();

    sf::Vector2f mouseWorld = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));
   // worldMap->backgroundView.setCenter((worldBodies["player"]->GetPosition().x*SCALE)/6,(worldBodies["player"]->GetPosition().y*SCALE)/6);


    /**Render Calls In Classses */
    if(debug)
        World->DrawDebugData();

    worldMap->render();



   // mapBuilder->render(mouseWorld.x,mouseWorld.y);
    player->render();

    /**RANDOM DRAW CALLS*/



    /** CALL TO DISPLAY */
    Window->display();

   /** Set Camera Position */
   view.setCenter(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE);
};

void Engine::addAssetToWorldMap()
{
    //dont go out of vector range
    if(assetLoader->spriteSheetSelection < 0)
        assetLoader->spriteSheetSelection = 0;
    if(assetLoader->spriteSheetSelection >= assetLoader->assetFileNames.size())
        assetLoader->spriteSheetSelection = assetLoader->assetFileNames.size() -1;

    std::string asset = assetLoader->getBaseFilename(assetLoader->assetFileNames.at(assetLoader->spriteSheetSelection));

    char str[50];
    sprintf(str, "%d", assetLoader->spriteSelection);

    sf::Sprite temp(assetLoader->spriteMap[asset + "_" + str]);
    sf::Vector2f mouseWorld = Window->mapPixelToCoords(sf::Mouse::getPosition(*Window));
    temp.setPosition(mouseWorld);

    worldMap->mapSprites.push_back(temp);
}
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
    text.setPosition(worldBodies["player"]->GetPosition().x*SCALE,-worldBodies["player"]->GetPosition().y*SCALE);
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






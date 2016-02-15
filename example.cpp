#include <SFML\Graphics.hpp>
#include <Box2D\Box2D.h>
#include <iostream>
#include <String>
#include <map>
/** We need this to easily convert between pixel and real-world coordinates*/
static const float SCALE = 30.f;

/** Create the base for the boxes to land */
void CreateGround(b2World& World, float X, float Y);

//create a platform
void CreatePlatform(b2World& World,float pos_x, float pos_y);

//create player
void CreatePlayer(b2World& World, float pos_x, float posy_y);
std::map<std::string,b2Body*> worldBodies;

/** Create the boxes */
void CreateBox(b2World& World, int MouseX, int MouseY);


int main()
{
    /** Prepare the window */
    sf::RenderWindow Window(sf::VideoMode(1024, 1200, 32), "Test");
   // Window.setFramerateLimit(60);
    //THE MAGICAL CLOCK
    sf::Clock clock;
   float frameCounter = 0;
   float switchFrame = 1;
   float frameSpeed = 60;
   float teleCounter = 0;
    float teleport_Distance = 205; //pixels

    /** Prepare the world */
    b2Vec2 Gravity(0.f, 9.8f);
    b2World World(Gravity,true);
    CreateGround(World, 512.f, 1100.f);
    CreatePlatform(World, 300.f,150.f);  ///initail location passed to function
    CreatePlayer(World, 150.f,10.f);

    /** Prepare textures */
    sf::Texture GroundTexture;
    sf::Texture BoxTexture;
    sf::Texture platform;
    sf::Texture player;
    sf::Texture flash;
    sf::Texture flash_blue;
    GroundTexture.loadFromFile("ground.png");
    BoxTexture.loadFromFile("box.png");
    platform.loadFromFile("grass_box/grass_96x96.png");
    player.loadFromFile("crate.png");
    flash.loadFromFile("flash.png");
    flash_blue.loadFromFile("flash_blue.png");
    sf::Event event;
    sf::Vertex line[] =
    {
        sf::Vertex(sf::Vector2f(  100,   100), sf::Color::Red),
        sf::Vertex(sf::Vector2f(  455, 546), sf::Color::Red)
    };
    int teleport = 0;
    int teleportChain = 0;
    sf::Clock teleportclock;
b2Vec2 teleportPosition;
b2Vec2 teleportPositionTemp;
b2Vec2 teleportPositionOld;
float teleportDelay = .27;
bool window_focus = 0;
    while (Window.isOpen())
    {

    float elapsed = clock.restart().asSeconds();//
    frameCounter += elapsed;// *frameSpeed;
   // std::cout << "frame counter: " << frameCounter << " Frame speed: " << frameSpeed << " clock.restart.asSeconds: " << temp << std::endl;
  teleCounter += elapsed;
    //frameCounter >= switchFrame
    if((    frameCounter >= switchFrame/frameSpeed) )
    {
        while(Window.pollEvent(event))
        {


        if(event.type == sf::Event::Closed)
                Window.close();
//
//        if (event.type == sf::Event::GainedFocus)
//        {
//            window_focus = 1;
//        }
//
//        if (event.type == sf::Event::LostFocus)
//                {
//                    window_focus = 0;
//                }
            //MOUSE INPUT

        if (event.type == sf::Event::MouseButtonReleased)
        {
            std::cout << "mouse released" << std::endl;

            if(event.mouseButton.button == sf::Mouse::Left)
            {

               //first jump
              if(teleportclock.getElapsedTime().asSeconds() >= .4f )
               {
                   teleport = 1;
          //         std::cout << "telecounter: " << teleCounter << std::endl;
                    teleCounter = 0;
                    teleportclock.restart();
                    break;
               }
             if((teleport == 1) && (teleportclock.getElapsedTime().asSeconds() < teleportDelay) )
             {
                    teleportChain = 1;
             }
//                int MouseX = sf::Mouse::getPosition(Window).x;
//                int MouseY = sf::Mouse::getPosition(Window).y;
             //CreateBox(World, MouseX, MouseY);

            // this line teleports to mouse cursor
            // worldBodies["player"]->SetTransform(b2Vec2(MouseX/SCALE,MouseY/SCALE),worldBodies["player"]->GetAngle());

             //   worldBodies["player"]->ApplyLinearImpulse( b2Vec2(0,.0000001f), worldBodies["player"]->GetWorldCenter() );

               //teleport toward mouse
               //send toward mouse cursor
 //               line[0] = sf::Vertex(sf::Vector2f(MouseX,MouseY),sf::Color::Red);
 //               line[1] = sf::Vertex(sf::Vector2f(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE),sf::Color::Red);
//                float force=0.05f;
 //       worldBodies["player"]->ApplyLinearImpulse(b2Vec2(diff.x*force,diff.y*force),worldBodies["player"]->GetWorldCenter()); //Apply impulse to box towards mouse

//               b2Vec2 mousePos = b2Vec2(MouseX, MouseY); //mouse posption in physics scale
//               std::cout << "mousePos: " << mousePos.x << " "<< mousePos.y << std::endl;
//               b2Vec2 playerPos = b2Vec2(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE);
//               std::cout << "playerPos: " << playerPos.x << " " << playerPos.y << std::endl;
//               b2Vec2 diff = mousePos-playerPos; //Find vector from box's center to mouse
//               std::cout << "diff: " << diff.x << " " << diff.y << std::endl;
//		       float d = sqrt((diff.x*diff.x + diff.y*diff.y));
//		       float tempx = diff.x*(7/d);
//		       float tempy = diff.y*(7/d);
//               std::cout << "newPos: " << tempx+playerPos.x << " " << tempy+playerPos.y << std::endl;
//
//            worldBodies["player"]->SetTransform( b2Vec2(tempx+playerPos.x/SCALE,tempy+playerPos.y/SCALE) ,worldBodies["player"]->GetAngle());

            }

        }

        if (event.type == sf::Event::MouseButtonPressed)
        {

            if(sf::Mouse::isButtonPressed(sf::Mouse::Right))
            {
                std::cout << "platform create"  << std::endl;
                int MouseX = sf::Mouse::getPosition(Window).x;
                int MouseY = sf::Mouse::getPosition(Window).y;
                CreatePlatform(World, MouseX,MouseY);
            }
        }

        //WASD keyboard movement
        if (event.type == sf::Event::KeyPressed)
        {
                if(event.key.code == sf::Keyboard::Escape)
                    Window.close();
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
               //applyLinearImpulse(b2vec2(Xacceleration,Yacceleration), point);
                if (event.key.code == sf::Keyboard::Space)
                {
                    std::cout << "W key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;
                                        b2Vec2 vel =  worldBodies["player"]->GetLinearVelocity();

                   // if(vel.y < .01f)
                        worldBodies["player"]->ApplyLinearImpulse( b2Vec2(0,-45), worldBodies["player"]->GetWorldCenter() );
               }
                //DOWN
                if (event.key.code == sf::Keyboard::S)
                {
                    std::cout << "S key Pressed" << (int) worldBodies["player"]->GetUserData() << std::endl;

                    worldBodies["player"]->ApplyForce( b2Vec2(0,500), worldBodies["player"]->GetWorldCenter() );
                }
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
        } //END OF WHILE LOOP
                    //TELEPORT MATH

                    int MouseX = sf::Mouse::getPosition(Window).x;
                        int MouseY = sf::Mouse::getPosition(Window).y;
                        float target_x = worldBodies["player"]->GetPosition().x;
                        float target_y = worldBodies["player"]->GetPosition().y;
                        teleportPositionTemp = teleportPosition;

                       if(teleportclock.getElapsedTime().asSeconds() < teleportDelay || teleportChain == 1)
                        {
                       //     std::cout << "target switch" << std::endl;
                            target_x = teleportPosition.x/SCALE;
                            target_y = teleportPosition.y/SCALE;
                        }


                       b2Vec2 mousePos = b2Vec2(MouseX, MouseY); //mouse posption in physics scale
                    //   std::cout << "mousePos: " << mousePos.x << " "<< mousePos.y << std::endl;
                       b2Vec2 playerPos = b2Vec2(target_x*SCALE,target_y*SCALE);
                       b2Vec2 pxplayerPos = b2Vec2(target_x,target_y);

                     //  std::cout << "playerPos: " << playerPos.x << " " << playerPos.y << std::endl;
                       b2Vec2 diff = mousePos-playerPos; //Find vector from box's center to mouse
                   //    std::cout << "diff: " << diff.x << " " << diff.y << std::endl;
                       float d = sqrt((diff.x*diff.x + diff.y*diff.y));
                       float var = (d<teleport_Distance) ? d: teleport_Distance;

                       float tempx = diff.x*( (var/SCALE) /d);
                       float tempy = diff.y*( (var/SCALE) /d);

                       float pxtempx = diff.x*( (var) /d);
                       float pxtempy = diff.y*( var/d);
                  //     std::cout << "newPos: " << tempx+playerPos.x << " " << tempy+playerPos.y << std::endl;
                     b2Vec2 exchange;

                     teleportPosition =  b2Vec2(pxtempx+playerPos.x,pxtempy+playerPos.y);

                     if(teleport == 0)
                        teleportPositionOld = teleportPosition;

                     if(teleportclock.getElapsedTime().asSeconds() < teleportDelay || teleportChain == 1)
                    {
                     exchange = teleportPosition;
                     teleportPosition = teleportPositionTemp;
                     teleportPositionTemp = exchange;
                    }
                     //DO TELEPORT
                     if(teleport == 1 && teleportclock.getElapsedTime().asSeconds() >= teleportDelay)
                            {
                          if(teleportChain == 1)
                          {
                              std::cout << "chaining" << std::endl;
                //    std::cout << "teleport x: " << teleportPositionTemp.x << "teleport y: " << teleportPositionTemp.y << std::endl;

                             worldBodies["player"]->SetTransform( b2Vec2(teleportPositionTemp.x/SCALE,teleportPositionTemp.y/SCALE) ,worldBodies["player"]->GetAngle());
                             teleportChain = 0;
                         }
                          else
                            worldBodies["player"]->SetTransform( b2Vec2(teleportPositionOld.x/SCALE,teleportPositionOld.y/SCALE) ,worldBodies["player"]->GetAngle());

                        worldBodies["player"]->ApplyLinearImpulse( b2Vec2(-0.f,-.4f), worldBodies["player"]->GetWorldCenter() );

                        teleCounter = 0;
                        teleport = 0;
                    }
                    //gravity negation
        if(teleportclock.getElapsedTime().asSeconds() < .5) //.7 worked decent
          worldBodies["player"]->ApplyForce( worldBodies["player"]->GetMass() * -World.GetGravity(), worldBodies["player"]->GetWorldCenter() );
        World.Step(1/60.f, 8, 3);

        Window.clear(sf::Color::White);
        int BodyCount = 0;
        for (b2Body* BodyIterator = World.GetBodyList(); BodyIterator != 0; BodyIterator = BodyIterator->GetNext())
        {
                  sf::Sprite Sprite;
                  sf::Sprite GroundSprite;
                  sf::Sprite platformSprite;
                  sf::Sprite playerSprite;
                  sf::Sprite teleportSprite;
                 // sf::CircleShape shape(teleport_Distance);
                    sf::CircleShape dot(5);
               //   sf::IntRect r1(100, 200, 250, 25);
            switch( (int) BodyIterator->GetUserData() ){
            case 1:
                if(teleport == 0)
                {

                  //  shape.setFillColor(sf::Color::Green);
                  //  shape.setOrigin(teleport_Distance,teleport_Distance);
                  //  shape.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);

                    dot.setFillColor(sf::Color::Blue);
                    dot.setOrigin(5,5);
                    dot.setPosition(teleportPosition.x,teleportPosition.y);
                }
                    playerSprite.setTexture(player);
                    playerSprite.setOrigin(24.f,24.f);


                    if(teleportclock.getElapsedTime().asSeconds() <teleportDelay)
                    {
                        playerSprite.setTexture(flash);
                        teleportSprite.setTexture(flash_blue);
                        teleportSprite.setOrigin(24.f,24.f);
                        teleportSprite.setPosition(teleportPosition.x,teleportPosition.y);

                    dot.setFillColor(sf::Color::Green);
                    dot.setOrigin(5,5);
               //     std::cout << "lower teleport x: " << teleportPositionTemp.x << " lower teleport y: " << teleportPositionTemp.y << std::endl;
                    dot.setPosition(teleportPositionTemp.x,teleportPositionTemp.y);

                    }
                    if((teleportclock.getElapsedTime().asSeconds() > .08f ) && (teleportclock.getElapsedTime().asSeconds() <= .16) )
                  //if(teleport === 0)
                    {
                        //playerSprite.setTexture(flash_blue);

                    }


                    playerSprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
                    playerSprite.setRotation(BodyIterator->GetAngle() * 180/b2_pi);

//                    Window.draw(shape);
                    Window.draw(dot);
                    Window.draw(teleportSprite);
                    Window.draw(playerSprite);
                    break;
            case 7:
                Sprite.setTexture(BoxTexture);
                Sprite.setOrigin(16.f, 16.f);
                if((teleportclock.getElapsedTime().asSeconds() > .08f ) && (teleportclock.getElapsedTime().asSeconds() <= .6))
                {
            Sprite.setPosition(teleportPosition.x,teleportPosition.y);
            std::cout << "render chaining " << std:: endl;
                }
                else
                    Sprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
                Sprite.setRotation(BodyIterator->GetAngle() * 180/b2_pi);
                Window.draw(Sprite);
                ++BodyCount;
                break;
            case 9:
                GroundSprite.setTexture(GroundTexture);
                GroundSprite.setOrigin(512.f, 8.f);
                GroundSprite.setPosition(BodyIterator->GetPosition().x * SCALE, BodyIterator->GetPosition().y * SCALE);
                GroundSprite.setRotation(180/b2_pi * BodyIterator->GetAngle());
                Window.draw(GroundSprite);
                break;
            case 13:
                platformSprite.setTexture(platform);
              //  platformSprite.setTextureRect(r1);
                platformSprite.setOrigin(48.f,48.f);
                platformSprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
                platformSprite.setRotation(180/b2_pi * BodyIterator->GetAngle());
                Window.draw(platformSprite);
                break;
        }

//            if (BodyIterator->GetType() == b2_dynamicBody)
//            {
//                sf::Sprite Sprite;
//                Sprite.setTexture(BoxTexture);
//                Sprite.setOrigin(16.f, 16.f);
//                Sprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
//                Sprite.setRotation(BodyIterator->GetAngle() * 180/b2_pi);
//                Window.draw(Sprite);
//                ++BodyCount;
//            }
//            else
//            {
//                sf::Sprite GroundSprite;
//                GroundSprite.setTexture(GroundTexture);
//                GroundSprite.setOrigin(400.f, 8.f);
//                GroundSprite.setPosition(BodyIterator->GetPosition().x * SCALE, BodyIterator->GetPosition().y * SCALE);
//                GroundSprite.setRotation(180/b2_pi * BodyIterator->GetAngle());
//                Window.draw(GroundSprite);
//            }
        }
                 MouseX = sf::Mouse::getPosition(Window).x;
                 MouseY = sf::Mouse::getPosition(Window).y;

                line[0] = sf::Vertex(sf::Vector2f(MouseX,MouseY),sf::Color::Red);
                line[1] = sf::Vertex(sf::Vector2f(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE),sf::Color::Red);
                if(teleportclock.getElapsedTime().asSeconds() < teleportDelay)
                    line[1] = sf::Vertex(sf::Vector2f(teleportPosition.x,teleportPosition.y),sf::Color::Red);

                float force=0.05f;

            if(window_focus == 1)
                sf::Mouse::setPosition(sf::Vector2i(teleportPosition.x,teleportPosition.y),Window);

        Window.draw(line, 2, sf::Lines);
        Window.display();

        frameCounter = 0;

        }
    }
	return 0;
}

void CreatePlayer(b2World& World, float pos_x, float pos_y)
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

void CreateBox(b2World& World, int MouseX, int MouseY)
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

void CreateGround(b2World& World, float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/SCALE, Y/SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = World.CreateBody(&BodyDef);

        int id = 9;
    Body->SetUserData((void*)id);


    b2PolygonShape Shape;
    Shape.SetAsBox((1024.f/2)/SCALE, (16.f/2)/SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 0.f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}

void CreatePlatform(b2World& World, float pos_x, float pos_y   )
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

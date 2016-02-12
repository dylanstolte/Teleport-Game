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
    sf::RenderWindow Window(sf::VideoMode(1024, 600, 32), "Test");
   // Window.setFramerateLimit(60);
    //THE MAGICAL CLOCK
    sf::Clock clock;
   float frameCounter = 0;
   float frameCounter1 = 0;
   float switchFrame = 100;
   float frameSpeed = 6000;

    /** Prepare the world */
    b2Vec2 Gravity(0.f, 9.8f);
    b2World World(Gravity,true);
    CreateGround(World, 512.f, 500.f);
    CreatePlatform(World, 300.f,150.f);  ///initail location passed to function
    CreatePlayer(World, 150.f,10.f);

    /** Prepare textures */
    sf::Texture GroundTexture;
    sf::Texture BoxTexture;
    sf::Texture platform;
    sf::Texture player;
    GroundTexture.loadFromFile("ground.png");
    BoxTexture.loadFromFile("box.png");
    platform.loadFromFile("grass_box/grass_96x96.png");
    player.loadFromFile("crate.png");

    sf::Event event;
//    sf::Vertex line[] =
//    {
//        sf::Vertex(sf::Vector2f(  100,   100), sf::Color::Red),
//        sf::Vertex(sf::Vector2f(  455, 546), sf::Color::Red)
//    };
    while (Window.isOpen())
    {
        // define a 100x100 square, red, with a 10x10 texture mapped on it

    frameCounter += frameSpeed * clock.restart().asSeconds();
    std::cout << frameCounter << std::endl;
    if((frameCounter >= switchFrame) )
    {
        Window.pollEvent(event);
        //MOUSE INPUT
        if (event.type == sf::Event::MouseButtonPressed)
        {

            if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                int MouseX = sf::Mouse::getPosition(Window).x;
                int MouseY = sf::Mouse::getPosition(Window).y;
             //CreateBox(World, MouseX, MouseY);

            // this line teleports to mouse cursor
            // worldBodies["player"]->SetTransform(b2Vec2(MouseX/SCALE,MouseY/SCALE),worldBodies["player"]->GetAngle());

             //   worldBodies["player"]->ApplyLinearImpulse( b2Vec2(0,.0000001f), worldBodies["player"]->GetWorldCenter() );

               //teleport toward mouse
               //send toward mouse cursor
//                line[0] = sf::Vertex(sf::Vector2f(MouseX,MouseY),sf::Color::Red);
//                line[1] = sf::Vertex(sf::Vector2f(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE),sf::Color::Red);
//                float force=0.05f;
 //       worldBodies["player"]->ApplyLinearImpulse(b2Vec2(diff.x*force,diff.y*force),worldBodies["player"]->GetWorldCenter()); //Apply impulse to box towards mouse

               b2Vec2 mousePos = b2Vec2(MouseX, MouseY); //mouse posption in physics scale
               std::cout << "mousePos: " << mousePos.x << " "<< mousePos.y << std::endl;
               b2Vec2 playerPos = b2Vec2(worldBodies["player"]->GetPosition().x*SCALE,worldBodies["player"]->GetPosition().y*SCALE);
               std::cout << "playerPos: " << playerPos.x << " " << playerPos.y << std::endl;
               b2Vec2 diff = mousePos-playerPos; //Find vector from box's center to mouse
               std::cout << "diff: " << diff.x << " " << diff.y << std::endl;
		       float d = sqrt((diff.x*diff.x + diff.y*diff.y));
		       float tempx = diff.x*(7/d);
		       float tempy = diff.y*(7/d);
               std::cout << "newPos: " << tempx+playerPos.x << " " << tempy+playerPos.y << std::endl;

            worldBodies["player"]->SetTransform( b2Vec2(tempx+playerPos.x/SCALE,tempy+playerPos.y/SCALE) ,worldBodies["player"]->GetAngle());

        }
            if(sf::Mouse::isButtonPressed(sf::Mouse::Right))
            {
                int MouseX = sf::Mouse::getPosition(Window).x;
                int MouseY = sf::Mouse::getPosition(Window).y;
                CreatePlatform(World, MouseX,MouseY);
        }
        }
        //WASD keyboard movement
        if (event.type == sf::Event::KeyPressed)
        {
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

                    if(vel.y < .01f)
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

        World.Step(1/60.f, 8, 3);

        Window.clear(sf::Color::White);
        int BodyCount = 0;
        for (b2Body* BodyIterator = World.GetBodyList(); BodyIterator != 0; BodyIterator = BodyIterator->GetNext())
        {
                  sf::Sprite Sprite;
                  sf::Sprite GroundSprite;
                  sf::Sprite platformSprite;
                  sf::Sprite playerSprite;
               //   sf::IntRect r1(100, 200, 250, 25);
            switch( (int) BodyIterator->GetUserData() ){
            case 1:
                    playerSprite.setTexture(player);
                    playerSprite.setOrigin(24.f,24.f);
                    playerSprite.setPosition(SCALE * BodyIterator->GetPosition().x, SCALE * BodyIterator->GetPosition().y);
                    playerSprite.setRotation(BodyIterator->GetAngle() * 180/b2_pi);
                    Window.draw(playerSprite);
                 break;
            case 7:
                Sprite.setTexture(BoxTexture);
                Sprite.setOrigin(16.f, 16.f);
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
//        Window.draw(line, 2, sf::Lines);
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
    FixtureDef.friction = 0.7f;
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

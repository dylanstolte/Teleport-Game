#include "Map.h"

Map::Map(Engine* engine)
{
    GroundTexture.loadFromFile("ground.png");
    BoxTexture.loadFromFile("box.png");
    platform.loadFromFile("platform1.png");
    smallPlatform.loadFromFile("grass_box/grass_96x96.png");
    this->engine = engine;
    std::cout << "create boxes" << std::endl;
    createBodyBox(0,700,150,25,4);
    //walls
  //  createBodyBox(-450,50,15,1500,4);
 //   createBodyBox(600,50,15,1500,4);
    //swinging platforms
    createBodyBox(-200,350,15,150,4);
    createBodyBox(350,550,15,150,4);
    //wallplatforms
    createBodyBox(-450,350,150,15,4);
    createBodyBox(600,500,150,15,4);
}

Map::~Map() {}
void Map::buildMapPerimeter() {}
void Map::createEnemy(){}

void Map::createSmallPlatform(float pos_x, float pos_y)
{
    std::cout << "create platform"  << pos_x << " " << pos_y << std::endl;

    b2BodyDef BodyDef;
 BodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies.push_back(Body);
    objectCount++;
    int id = 12;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((96.f/2)/engine->SCALE, (96.f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 100.f;
    FixtureDef.friction = 50.0f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);


}

void Map::createBodyBox(float pos_x, float pos_y,float width, float height, int property)
{
     b2BodyDef BodyDef;

    sf::Vector2i temp1 = engine->Window->mapCoordsToPixel(sf::Vector2f(pos_x,pos_y));
    sf::Vector2f temp = engine->Window->mapPixelToCoords(sf::Vector2i(pos_x,pos_y));
    BodyDef.position = b2Vec2((pos_x)/engine->SCALE, (pos_y)/engine->SCALE);
    std::cout << "passeds" << pos_x << " " << pos_y << std::endl;
    std::cout << "coords to pix" << temp1.x << " " << temp1.y << std::endl;
    std::cout << "pix to coords" << temp.x << " " << temp.y << std::endl;

    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies.push_back(Body);
    objectCount++;
    int id = 4;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((width/2)/engine->SCALE, (height/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 1.f;
    FixtureDef.friction = 1.0f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);

}

void Map::createPlatform(float pos_x, float pos_y   )
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies.push_back(Body);
    objectCount++;
    int id = 13;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((800*.4f/2)/engine->SCALE, (300*.6f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 100.f;
    FixtureDef.friction = 10.0f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);

}

void Map::CreateGround(float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/engine->SCALE, Y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies.push_back(Body);
    int id = 9;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((1024*2.f)/engine->SCALE, (16.f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 0.f;
    FixtureDef.friction = 1.0f;
    FixtureDef.shape = &Shape;
    b2Fixture* bodyFixture = Body->CreateFixture(&FixtureDef);
    bodyFixture->SetUserData((void*) id);
}
void Map::render()
{
    //For all the bodies in the map
    for (int i = 0; i < mapBodies.size(); i++)
    {
        //CHECK object by userData
        b2Body* it = mapBodies.at(i);
        sf::Sprite platformSprite;
        if((int)it->GetUserData() == 13 )//&& it->GetUserData())
        {
            //      std::cout << "in if" << std::endl;
            platformSprite.setTexture(platform);
            //platformSprite.setTextureRect(r1);
            platformSprite.setOrigin(400.f,200.f);
            platformSprite.setPosition(engine->SCALE * it->GetPosition().x, engine->SCALE * it->GetPosition().y);
            platformSprite.setRotation(180/b2_pi * it->GetAngle());
            platformSprite.setScale(.4,.6);
            engine->Window->draw(platformSprite);
        }

        if((int)it->GetUserData() == 12 )//&& it->GetUserData())
        {
            //      std::cout << "in if" << std::endl;
            platformSprite.setTexture(smallPlatform);
            //platformSprite.setTextureRect(r1);
            platformSprite.setOrigin(48.f,48.f);
            platformSprite.setPosition(engine->SCALE * it->GetPosition().x, engine->SCALE * it->GetPosition().y);
            platformSprite.setRotation(180/b2_pi * it->GetAngle());
            //  platformSprite.setScale(.4,.6);
            engine->Window->draw(platformSprite);
        }
        if((int)it->GetUserData() == 9 )//&& it->GetUserData())
        {
            groundSprite.setTexture(GroundTexture);
            groundSprite.setOrigin(512.f, 8.f);
            groundSprite.setPosition(it->GetPosition().x * engine->SCALE, it->GetPosition().y * engine->SCALE);
            groundSprite.setRotation(180/b2_pi * it->GetAngle());
        }
        if((int)it->GetUserData() == 2 )//&& it->GetUserData())
        {
            //get selection
            //draw sprite according to selection
            //set sprite according to body
           // engine->assetLoader->spriteMap["ginso_0"].setOrigin(40,40);
       //    std::cout << "create from asset loader" << std::endl;
            engine->assetLoader->spriteMap["ginso_2"].setPosition(it->GetPosition().x * engine->SCALE, it->GetPosition().y * engine->SCALE);
            engine->assetLoader->spriteMap["ginso_2"].setRotation(180/b2_pi * it->GetAngle());
            engine->Window->draw(engine->assetLoader->spriteMap["ginso_2"]);
        }
        if((int)it->GetUserData() == 1 )//&& it->GetUserData())
        {
            //get selection
            //draw sprite according to selection
            //set sprite according to body
           // engine->assetLoader->spriteMap["ginso_0"].setOrigin(40,40);
       //    std::cout << "create from asset loader" << std::endl;
            engine->assetLoader->spriteMap["ginso_1"].setPosition(it->GetPosition().x * engine->SCALE, it->GetPosition().y * engine->SCALE);
            engine->assetLoader->spriteMap["ginso_1"].setRotation(180/b2_pi * it->GetAngle());
            engine->Window->draw(engine->assetLoader->spriteMap["ginso_1"]);
        }
        if((int)it->GetUserData() == 0 )//&& it->GetUserData())
        {
            //get selection
            //draw sprite according to selection
            //set sprite according to body
           // engine->assetLoader->spriteMap["ginso_0"].setOrigin(40,40);
       //    std::cout << "create from asset loader" << std::endl;
            engine->assetLoader->spriteMap["blueball_0"].setPosition(it->GetPosition().x * engine->SCALE, it->GetPosition().y * engine->SCALE);
            engine->assetLoader->spriteMap["blueball_0"].setRotation(180/b2_pi * it->GetAngle());
            engine->Window->draw(engine->assetLoader->spriteMap["blueball_0"]);
        }
    }

    engine->Window->draw(groundSprite);


}

void Map::placeObject(int selection,int mouse_x,int mouse_y)
{
    switch ( selection)
    {
    case 1:
        createSmallPlatform(mouse_x,mouse_y);
        //  engine->Window->draw(groundSprite);
        break;
    case 2:
       createPlatform(mouse_x,mouse_y);
     // createBodyBox(200,200,150,25);
        break;
    case 3:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["ginso_0"],0,mouse_x,mouse_y);
           // engine->Window->draw(engine->assetLoader->spriteMap["ginso_0"]);
        }
        break;
    case 4:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["ginso_1"],1,mouse_x,mouse_y);
        }
        break;
    case 5:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["ginso_2"],2,mouse_x,mouse_y);
        }
        break;
    case 6:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["mountain_0"],0,mouse_x,mouse_y);
        }
        break;
    case 7:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["mountain_1"],1,mouse_x,mouse_y);
        }
        break;
    case 8:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["mountain_2"],2,mouse_x,mouse_y);
        }
        break;
    }

}

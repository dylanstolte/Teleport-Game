#include "Map.h"

Map::Map(Engine* engine)
{
    GroundTexture.loadFromFile("ground.png");
    BoxTexture.loadFromFile("box.png");
    platform.loadFromFile("platform1.png");
    smallPlatform.loadFromFile("grass_box/grass_96x96.png");
    this->engine = engine;
}

Map::~Map() {}
void Map::buildMapPerimeter(

) {}

void Map::createSmallPlatform(float pos_x, float pos_y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies["smallplatform" + objectCount] = Body;
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

void Map::createPlatform(float pos_x, float pos_y   )
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies["platform" + objectCount] = Body;
    objectCount++;
    int id = 13;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((800*.4f/2)/engine->SCALE, (300*.6f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 100.f;
    FixtureDef.friction = 50.0f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}

void Map::CreateGround(float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/engine->SCALE, Y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies["ground"] = Body;
    int id = 9;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((1024*2.f)/engine->SCALE, (16.f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 0.f;
    FixtureDef.friction = 50.0f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}
void Map::render()
{
for (std::map<std::string,b2Body*>::iterator it=mapBodies.begin(); it!=mapBodies.end(); ++it)
    {
    //    std::cout << "iterating" << std::endl;
        sf::Sprite platformSprite;
        if((int)it->second->GetUserData() == 13 )//&& it->GetUserData())
        {
      //      std::cout << "in if" << std::endl;
            platformSprite.setTexture(platform);
            //platformSprite.setTextureRect(r1);
            platformSprite.setOrigin(400.f,200.f);
            platformSprite.setPosition(engine->SCALE * it->second->GetPosition().x, engine->SCALE * it->second->GetPosition().y);
            platformSprite.setRotation(180/b2_pi * it->second->GetAngle());
            platformSprite.setScale(.4,.6);
            engine->Window->draw(platformSprite);
        }

          if((int)it->second->GetUserData() == 12 )//&& it->GetUserData())
        {
      //      std::cout << "in if" << std::endl;
            platformSprite.setTexture(smallPlatform);
            //platformSprite.setTextureRect(r1);
            platformSprite.setOrigin(48.f,48.f);
            platformSprite.setPosition(engine->SCALE * it->second->GetPosition().x, engine->SCALE * it->second->GetPosition().y);
            platformSprite.setRotation(180/b2_pi * it->second->GetAngle());
          //  platformSprite.setScale(.4,.6);
            engine->Window->draw(platformSprite);
        }
    }



    /////////////////////////////////////
  //  std::cout << "render map" << std::endl;

    groundSprite.setTexture(GroundTexture);
    groundSprite.setOrigin(512.f, 8.f);
    groundSprite.setPosition(mapBodies["ground"]->GetPosition().x * engine->SCALE, mapBodies["ground"]->GetPosition().y * engine->SCALE);
    groundSprite.setRotation(180/b2_pi * mapBodies["ground"]->GetAngle());
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
    }

}

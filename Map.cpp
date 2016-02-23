#include "Map.h"

Map::Map(Engine* engine) {this->engine = engine;}
Map::~Map() {}
void Map::buildMapPerimeter(

) {}

void Map::CreatePlatform(float pos_x, float pos_y   )
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    int id = 13;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((800*.4f/2)/engine->SCALE, (300*.6f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 100.f;
    FixtureDef.friction = 0.7f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}

void Map::CreateGround(float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/engine->SCALE, Y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    int id = 9;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((1024*2.f)/engine->SCALE, (16.f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 0.f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);
}

#include "Enemy.h"
#include <math.h>

Enemy::Enemy(Engine* engine, float pos_x, float pos_y ,std::string enemyName, int variant)
{
    this->engine = engine;
    this->bodyName = enemyName;
    originPos.x = pos_x;
    originPos.y = pos_y;
    this->variant = variant;

    spawnBody();

    };

void Enemy::spawnBody()
{
    bodyDef.position = b2Vec2(originPos.x/engine->SCALE, originPos.y/engine->SCALE);
    bodyDef.type = b2_dynamicBody;
    //prevent player from rotating
    bodyDef.fixedRotation = true;

     body = NULL;
     b2Body* temp;

    body = engine->World->CreateBody(&bodyDef);
    //add body to world map
    //engine->worldMap->mapEnemies.push_back(this);
    int id = 2;
    body->SetUserData((void*)id);

    shape.SetAsBox((48/2)/engine->SCALE, (48/2)/engine->SCALE);
    fixtureDef.density = 3.f;
    fixtureDef.friction = 1.f;
    fixtureDef.shape = &shape;
    b2Fixture* fixture = body->CreateFixture(&fixtureDef);

    shape.SetAsBox(0.2, 0.2, b2Vec2(0,1), 0);
   // fixtureDef.isSensor = true;
    b2Fixture* footSensorFixture = body->CreateFixture(&fixtureDef);
    footSensorFixture->SetUserData( (void*)3 );

  //  Json::Value bodyValue = engine->json.b2j( body );
  //  body = engine->json.j2b2Body(engine->World, bodyValue);
    std::cout << "bodyvalue" << std::endl;





   engine->json.setBodyName(body, bodyName.c_str());
   engine->json.setCustomInt(fixture, "damage", 10);
  // engine->json.j2b2Body(engine->World, bodyValue);
 // engine->World->DestroyBody(body);
  dead = false;

}
void Enemy::deleteBody()

{
 std::cout << "remove body in class  " << engine->json.getBodyName(body) << std::endl;

    engine->World->DestroyBody(body);
    std::cout << "completed body in class removal  " << std::endl;
    body = NULL;
    std::cout << "body set to NULL  " << std::endl;
    //this class will be removed
    dead = true;
    respawn = 1800;

}

Enemy::~Enemy()
{



};

void Enemy::update(float time)
{
    if(dead)
    {
//std::cout << "respawn count down " << respawn << std::endl;
        respawn--;
    }

    if(respawn == 0)
    {
      spawnBody();
   //   std::cout << "respawn " << bodyName << std::endl;
        dead = false;
        respawn = 1;
    }
    if(!dead && body != NULL)
        moveOnPath(time);
}
void Enemy::moveOnPath(float x)
{

    //get body position
float speed = 3000;
float distance = 10;
//std::cout << "move path" << std::endl;
    if(variant == 1)
    {
         counter+=x;
        body->SetTransform(b2Vec2(originPos.x/engine->SCALE + distance * sin(speed * counter),body->GetPosition().y),body->GetAngle());

    }

    if(variant == 2)
    {
         counter+=x;
        body->SetTransform(b2Vec2(body->GetPosition().x,originPos.y/engine->SCALE + distance * sin(speed * counter)),body->GetAngle());

    }

    if(variant == 3)
    {
         counter+=x;
        body->SetTransform(b2Vec2(originPos.x/engine->SCALE + distance * cos(speed * 10 * counter),originPos.y/engine->SCALE + distance * sin(speed * 10 * counter)),body->GetAngle());

    }

    if(variant == 4)
    {
         counter+=x;
         int delay = 600;
        body->SetTransform(b2Vec2(originPos.x/engine->SCALE + distance * cos(speed * 10 * counter + delay),originPos.y/engine->SCALE + distance * sin(speed * 10 * counter + delay)),body->GetAngle());

    }


}

void Enemy::render()
{

    sf::Sprite enemySprite;
 //   for (int i = 0; i < engine->worldMap->mapEnemies.size(); i++)
    {
      //  std::cout << "render enemy" << std::endl;
    enemySprite.setOrigin(35,35);
    enemySprite.setTexture(enemyTexture);
    enemySprite.setTextureRect(walkLeftAnimation.nextFrame());

    enemySprite.setPosition(engine->SCALE * body->GetPosition().x, engine->SCALE * body->GetPosition().y);
    enemySprite.setRotation(body->GetAngle() * 180/b2_pi);
    engine->Window->draw(enemySprite);

    }
};

sf::Vector2i Enemy::nextPosition()
{
        return sf::Vector2i(0,0);
};

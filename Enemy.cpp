#include "Enemy.h"
#include <math.h>

Enemy::Enemy(Engine* engine, float pos_x, float pos_y ,std::string enemyName)
{
    this->engine = engine;
    this->bodyName = enemyName;
    originPos.x = pos_x;
    originPos.y = pos_x;
    bodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
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
    fixtureDef.isSensor = true;
    b2Fixture* footSensorFixture = body->CreateFixture(&fixtureDef);
    footSensorFixture->SetUserData( (void*)3 );

    Json::Value bodyValue = engine->json.b2j( body );
  //  body = engine->json.j2b2Body(engine->World, bodyValue);
    std::cout << "bodyvalue" << std::endl;

    enemyTexture.loadFromFile("AssetLoader/enemysprite.png");

    walkLeftAnimation = Animation(4,enemyTexture);
    walkLeftAnimation.setFrame(0,70,60,70);





   engine->json.setBodyName(body, bodyName.c_str());
   engine->json.setCustomInt(fixture, "damage", 10);
  // engine->json.j2b2Body(engine->World, bodyValue);
 // engine->World->DestroyBody(body);
    };

Enemy::~Enemy()
{
    std::cout << "remove body in class  " << std::endl;
    //engine->World->DestroyBody( engine->json.getBodyByName(bodyName) );
    engine->World->DestroyBody(body);
    std::cout << "completed body in class removal  " << std::endl;
    //this class will be removed


};
void Enemy::moveOnPath(float x)
{

    //get body position

//std::cout << "move path" << std::endl;
        body->SetTransform(b2Vec2(originPos.x/engine->SCALE + 6 * sin(x),body->GetPosition().y),body->GetAngle());

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

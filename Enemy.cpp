#include "Enemy.h"


Enemy::Enemy(b2World* World,Engine* engine, float pos_x, float pos_y )
{
    this->engine = engine;
    this->world = World;
    originPos.x = pos_x;
    originPos.y = pos_x;
    bodyDef.position = b2Vec2(100.f/engine->SCALE, 100.f/engine->SCALE);
    bodyDef.type = b2_dynamicBody;
    //prevent player from rotating
    bodyDef.fixedRotation = true;
    body = world->CreateBody(&bodyDef);
    //add body to world map
    engine->worldMap->mapEnemies.push_back(body);
    int id = 2;
    body->SetUserData((void*)id);

    shape.SetAsBox((48/2)/engine->SCALE, (48/2)/engine->SCALE);
    fixtureDef.density = 3.f;
    fixtureDef.friction = 1.f;
    fixtureDef.shape = &shape;
    body->CreateFixture(&fixtureDef);

    shape.SetAsBox(0.2, 0.2, b2Vec2(0,1), 0);
    fixtureDef.isSensor = true;
    b2Fixture* footSensorFixture = body->CreateFixture(&fixtureDef);
    footSensorFixture->SetUserData( (void*)3 );


    enemyTexture.loadFromFile("enemysprite.png");

   walkLeftAnimation = Animation(4,enemyTexture);
   walkLeftAnimation.setFrame(0,70,60,70);

   // enemySprite.setOrigin(24.f,24.f);
    };

Enemy::~Enemy(){};
void Enemy::moveOnPath()
{

    //move left if less than 400 pixel from origin
    if(body->GetPosition().x > originPos.x - 100)
    {
        b2Vec2 vel =  body->GetLinearVelocity();
        float desiredVel = -5;
        float velChange = desiredVel - vel.x;
        float impulse =  body->GetMass() * velChange; //disregard time factor
        body->ApplyLinearImpulse(b2Vec2(impulse,0), body->GetWorldCenter(),true );
    }

}

void Enemy::render()
{
    sf::Sprite enemySprite;
    for (int i = 0; i < engine->worldMap->mapEnemies.size(); i++)
    {

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

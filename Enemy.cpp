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
  //  engine->worldBodies["enemy"] = body;
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


    enemyTexture.loadFromFile("crate.png");

    enemySprite.setOrigin(24.f,24.f);};

Enemy::~Enemy(){};
void Enemy::moveOnPath()
{
        b2Vec2 vel =  body->GetLinearVelocity();
        float desiredVel = -5;

        float velChange = desiredVel - vel.x;
        float impulse =  body->GetMass() * velChange; //disregard time factor
        body->ApplyLinearImpulse(b2Vec2(impulse,0), body->GetWorldCenter() );

}

void Enemy::render()
{
    //enemySprite.setOrigin();
    enemySprite.setTexture(enemyTexture);
    enemySprite.setPosition(engine->SCALE * body->GetPosition().x, engine->SCALE * body->GetPosition().y);
    enemySprite.setRotation(body->GetAngle() * 180/b2_pi);
    engine->Window->draw(enemySprite);
};

sf::Vector2i Enemy::nextPosition()
{
        return sf::Vector2i(0,0);
};
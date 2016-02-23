#include "Player.h"
#include "Animation.h"

Player::Player(b2World* world, Engine* engine)
{

    this->engine = engine;
    bodyDef.position = b2Vec2(0.f/Engine::SCALE, 0.f/Engine::SCALE);
    bodyDef.type = b2_dynamicBody;
    //prevent player from rotating
    bodyDef.fixedRotation = true;
    body = world->CreateBody(&bodyDef);
    //add body to world map
    engine->worldBodies["player"] = body;
    int id = 1;
    body->SetUserData((void*)id);

    shape.SetAsBox((190*.4f/2)/Engine::SCALE, (300*.35f/2)/Engine::SCALE);
    fixtureDef.density = 3.f;
    fixtureDef.friction = 2.f;
    fixtureDef.shape = &shape;
    body->CreateFixture(&fixtureDef);


    walkRightAnimation = Animation();

    shape.SetAsBox(0.3, 0.3, b2Vec2(0,-2), 0);
    fixtureDef.isSensor = true;
    b2Fixture* footSensorFixture = body->CreateFixture(&fixtureDef);
    footSensorFixture->SetUserData( (void*)3 );

    playerTexture.loadFromFile("spritesheetvolt.png");

}

void Player::setTexture(sf::Texture playerTexture)
{

    playerSprite.setTexture(playerTexture);

}

void Player::setOrigin(float pos_x, float pos_y)
{

    playerSprite.setOrigin(140.f,190.f);

}

void Player::render()
{

    std::cout << engine->clock.getElapsedTime().asSeconds() << std::endl;
    std::cout << engine->frameCounter << std::endl;
    animationCounter += engine->clock.getElapsedTime().asSeconds();
    if(animationCounter >= engine->switchFrame/engine->frameSpeed)
    {
        std::cout << "next animation: " << animationCounter << "  "<< 0 + animationCounter *280 <<std::endl;
        walkRightAnimation.nextFrame();
        animationCounter = 0;
    }

    playerSprite.setTexture(playerTexture);
    playerSprite.setOrigin(140.f,190.f);
    playerSprite.setTextureRect(sf::IntRect(0,0,280,380));
    playerSprite.setPosition(Engine::SCALE * body->GetPosition().x, Engine::SCALE * body->GetPosition().y);
    playerSprite.setRotation(body->GetAngle() * 180/b2_pi);
    playerSprite.setScale(.4,.35);

}


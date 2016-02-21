#include "Player.h"

Player::Player(b2World* world, Engine* engine){

    bodyDef.position = b2Vec2(0.f/Engine::SCALE, 0.f/Engine::SCALE);
    bodyDef.type = b2_dynamicBody;
    body = world->CreateBody(&bodyDef);
    //add body to world map
    engine->worldBodies["player"] =  body;
    int id = 1;
    body->SetUserData((void*)id);

    shape.SetAsBox((280*.4f/2)/Engine::SCALE, (380*.35f/2)/Engine::SCALE);
    fixtureDef.density = 3.f;
    fixtureDef.friction = 2.f;
    fixtureDef.shape = &shape;
    body->CreateFixture(&fixtureDef);

    playerTexture.loadFromFile("spritesheetvolt.png");

}

    void Player::setTexture(sf::Texture playerTexture){

        playerSprite.setTexture(playerTexture);

    }

    void Player::setOrigin(float pos_x, float pos_y){

        playerSprite.setOrigin(140.f,190.f);

    }

    void Player::render(){

        playerSprite.setTexture(playerTexture);
        playerSprite.setOrigin(140.f,190.f);
                    playerSprite.setTextureRect(sf::IntRect(0,0,280,380));
                    playerSprite.setPosition(Engine::SCALE * body->GetPosition().x, Engine::SCALE * body->GetPosition().y);
                    playerSprite.setRotation(body->GetAngle() * 180/b2_pi);
                    playerSprite.setScale(.4,.35);

    }


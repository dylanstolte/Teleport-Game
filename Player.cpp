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

    shape.SetAsBox((25/2)/Engine::SCALE, (40/2)/Engine::SCALE);
    fixtureDef.density = 3.f;
    fixtureDef.friction = 2.f;
    fixtureDef.shape = &shape;
    body->CreateFixture(&fixtureDef);

    shape.SetAsBox(0.2, 0.2, b2Vec2(0,1), 0);
    fixtureDef.isSensor = true;
    b2Fixture* footSensorFixture = body->CreateFixture(&fixtureDef);
    footSensorFixture->SetUserData( (void*)3 );


    playerTexture.loadFromFile("spritesheetvolt.png");

    playerSprite.setOrigin(13.f,21.f);

    //Animation Setup
    pichuSheet.loadFromFile("pichu1.png");
    idleAnimation = Animation(8,pichuSheet);
    idleAnimation.setFrame(0,0,25,38);

    runRightAnimation = Animation(3,pichuSheet);
    runRightAnimation.setFrame(13,45,20,30);

    runLeftAnimation = Animation(3,pichuSheet);
    runLeftAnimation.setFrame(13,45,20,30);
    runLeftAnimation.flip = true;


}


void Player::setOrigin(float pos_x, float pos_y)
{

    playerSprite.setOrigin(140.f,190.f);

}

void Player::render()
{

    //std::cout << engine->clock.getElapsedTime().asSeconds() << std::endl;
    //std::cout << engine->frameCounter << std::endl;
    animationCounter += engine->clock.getElapsedTime().asSeconds();
    if(animationCounter >= engine->switchFrame/30)
    {
     //   std::cout << "next animation: " << animationCounter << "  "<< 0 + animationCounter *280 <<std::endl;
    //    if(engine->moveJump)
        {
            playerSprite.setTexture(idleAnimation.animationTexture);
            playerSprite.setTextureRect(idleAnimation.nextFrame());
        }
        if(engine->moveRight)
        {
            playerSprite.setTexture(runRightAnimation.animationTexture);
            playerSprite.setTextureRect(runRightAnimation.nextFrame());
        }
        else if(engine->moveLeft)
        {
            playerSprite.setTexture(runLeftAnimation.animationTexture);
            playerSprite.setTextureRect(runLeftAnimation.nextFrame());
        }
        animationCounter = 0;
    }



    playerSprite.setPosition(Engine::SCALE * body->GetPosition().x, Engine::SCALE * body->GetPosition().y);
    playerSprite.setRotation(body->GetAngle() * 180/b2_pi);
 //   playerSprite.setScale(.4,.35);

}


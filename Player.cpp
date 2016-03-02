#include "Player.h"
#include "Animation.h"

Player::Player(b2World* world, Engine* engine)
{

    this->engine = engine;
    bodyDef.position = b2Vec2(0.f/engine->SCALE, 400.f/engine->SCALE);
    bodyDef.type = b2_dynamicBody;
    //prevent player from rotating
    bodyDef.fixedRotation = true;
    body = world->CreateBody(&bodyDef);
    //add body to world map
    engine->worldBodies["player"] = body;
    int id = 1;
    body->SetUserData((void*)id);

  //  shape.SetAsBox((25/2)/engine->SCALE, (35/2)/engine->SCALE);
    circleShape.m_p.Set(0,.5); //position, relative to body position
    circleShape.m_radius = .5;
    fixtureDef.density = 3.f;
    fixtureDef.friction = 1.f;
    fixtureDef.shape = &circleShape;
    bodyFixture = body->CreateFixture(&fixtureDef);
    bodyFixture->SetUserData( (void*)2 );

    //circle bottom of plauer


    //foot fixture
    shape.SetAsBox(0.2, 0.2, b2Vec2(0,1), 0);
    fixtureDef.isSensor = true;
    fixtureDef.shape = &shape;
    b2Fixture* footSensorFixture = body->CreateFixture(&fixtureDef);
    footSensorFixture->SetUserData( (void*)3 );
    //right fixture
    shape.SetAsBox(0.2, 0.2, b2Vec2(.7,0), 0);
    fixtureDef.isSensor = true;
    b2Fixture* rightSensorFixture = body->CreateFixture(&fixtureDef);
    rightSensorFixture->SetUserData( (void*)1 );

    //left fixture
    shape.SetAsBox(0.2, 0.2, b2Vec2(-.7,0), 0);
    fixtureDef.isSensor = true;
    b2Fixture* leftSensorFixture = body->CreateFixture(&fixtureDef);
    leftSensorFixture->SetUserData( (void*)1 );


    playerTexture.loadFromFile("spritesheetvolt.png");

    playerSprite.setOrigin(13.f,21.f);
    checkpointPos.x =0;
    checkpointPos.y =60;

    //Animation Setup
    pichuSheet.loadFromFile("pichu1.png");
    idleAnimation = Animation(8,pichuSheet);
    idleAnimation.setFrame(0,0,25,38);

    runRightAnimation = Animation(3,pichuSheet);
    runRightAnimation.setFrame(13,45,20,30);

    runLeftAnimation = Animation(3,pichuSheet);
    runLeftAnimation.setFrame(103,45,20,30);

    jumpAnimation = Animation(4,pichuSheet);
    jumpAnimation.setFrame(7,140,25,40);

    jumpLeftAnimation = Animation(4,pichuSheet);
    jumpLeftAnimation.setFrame(7,90,25,40);

    fallingAnimation = Animation(1,pichuSheet);
    fallingAnimation.setFrame(270,140,20,40);

    sf::Texture temp = *( engine->assetLoader->spriteMap["blueball_0"].getTexture() );
    attackAnimation =  Animation(1,  temp);
    sf::IntRect temp1 = engine->assetLoader->spriteMap["blueball_0"].getTextureRect();
    attackAnimation.setFrame(65,80,290,75);
    test.scale(.25,.25);
    //125
}


void Player::setOrigin(float pos_x, float pos_y)
{

    playerSprite.setOrigin(140.f,190.f);

}

void Player::render()
{
    {


//        {
//        playerSprite.setTexture(idleAnimation.animationTexture);
//        playerSprite.setTextureRect(idleAnimation.nextFrame());
//        }
        if(attack)
        {
            //for each enemy in range
            for (int i = 0; i < engine->worldMap->mapEnemies.size(); i++)
            {
                b2Body* it = engine->worldMap->mapEnemies.at(i);

                float euclidian = getEuclidianDistance(sf::Vector2f(it->GetPosition().x*30, it->GetPosition().y*30),sf::Vector2f(playerSprite.getPosition().x, playerSprite.getPosition().y));
                sf::Vector2f bodyPosition = sf::Vector2f(it->GetPosition().x*30, it->GetPosition().y*30);
                sf::Vector2f playerPosition = sf::Vector2f(playerSprite.getPosition().x, playerSprite.getPosition().y);
                if(euclidian < attackDistance)
                {
                    sf::Vertex line[] =
                    {
                        sf::Vertex(bodyPosition,sf::Color::Blue),
                        sf::Vertex(playerPosition,sf::Color::Blue)
                    };
                    engine->Window->draw(line, 2, sf::Lines);
                    sf::Texture tex;
                    test.setTexture(*(engine->assetLoader->spriteMap["blueball_0"].getTexture()));
                    test.setTextureRect(attackAnimation.nextFrame());
                    test.setOrigin(100,35);
                    test.setPosition(playerPosition-getCoordsToPointBetweenPoints(euclidian,playerPosition,bodyPosition,attackPos +=.5));


                 //  std::cout << test.getPosition().x << " " << test.getPosition().y << std::endl;
//                 std::cout << "rect" << test->getTextureRect().width << std::endl;
//                 test->setPosition(100.f,300.f);
               //  test.setTexture(&(engine->assetLoader->spriteMap["ginso_0"].getTexture()));
                    engine->Window->draw(test);
                }
            }
            //draw line from player to enemy
            //delete enemy
        }
        if(engine->jumpAnimation)
        {
            jumpAnimation.frameSpeed = 8;
            if(jumpLeftAnimation.currentFrame<jumpLeftAnimation.totalFrames && body->GetLinearVelocity().x < 0)
            {

                playerSprite.setTexture(jumpLeftAnimation.animationTexture);
                playerSprite.setTextureRect(jumpLeftAnimation.nextFrame());
                inAir = true;
            }

            else  if(jumpAnimation.currentFrame<jumpAnimation.totalFrames && body->GetLinearVelocity().x > 0)
            {

                playerSprite.setTexture(jumpAnimation.animationTexture);
                playerSprite.setTextureRect(jumpAnimation.nextFrame());
                inAir = true;
            }
            else if(isFalling())
            {
                //  std::cout << body->GetLinearVelocity().y<< std::endl;
                if(body->GetLinearVelocity().y > 0)
                {
                    //  std::cout << "animation" << std::endl;
                    playerSprite.setTexture(fallingAnimation.animationTexture);
                    playerSprite.setTextureRect(fallingAnimation.nextFrame());
                }
            }
            else if(numFootContacts > 0)
            {
                engine->jumpAnimation = false;
                jumpAnimation.restart();
                jumpLeftAnimation.restart();
            }


        }
        else if(engine->moveLeft && !engine->jumpAnimation)
        {
            runLeftAnimation.frameSpeed = 16;
            playerSprite.setTexture(runLeftAnimation.animationTexture);
            playerSprite.setTextureRect(runLeftAnimation.nextFrame());
        }
        else if(engine->moveRight && !engine->jumpAnimation)
        {

            runRightAnimation.frameSpeed = 16;
            playerSprite.setTexture(runRightAnimation.animationTexture);
            playerSprite.setTextureRect(runRightAnimation.nextFrame());
        }


    }






    playerSprite.setPosition(engine->SCALE * body->GetPosition().x, engine->SCALE * body->GetPosition().y);
    playerSprite.setRotation(body->GetAngle() * 180/b2_pi);
//   playerSprite.setScale(.4,.35);

}
sf::Vector2f Player::getCoordsToPointBetweenPoints(float euclidian,sf::Vector2f player,sf::Vector2f enemy,float distance)
{
    sf::Vector2f coords;
    sf::Vector2f diff = player - enemy;
    std::cout << "target" << player.x << " " << player.y << std::endl;
    std::cout << "dest" << enemy.x << " " << enemy.y << std::endl;
    std::cout <<"diff" << diff.x << " " << diff.y << std::endl;

//    sf::Vertex line[] =
//    {
//        sf::Vertex(player,sf::Color::Red),
//        sf::Vertex(sf::Vector2f(enemy.x,enemy.y-player.y),sf::Color::Green)
//    };
//    engine->Window->draw(line, 2, sf::Lines);

    coords.x = diff.x*( (distance) /euclidian);
    coords.y = diff.y*( (distance) /euclidian);


    return coords;
}
float Player::getEuclidianDistance(sf::Vector2f target,sf::Vector2f destination)
{
    return sqrt((target.x-destination.x)*(target.x-destination.x)+(target.y-destination.y)*(target.y-destination.y));


}

void Player::respawn(sf::Vector2f checkpointPos)
{
    std::cout << "respawn" << std::endl;
    body->SetTransform(b2Vec2(0,600/30),body->GetAngle());
    body->SetLinearVelocity(b2Vec2(0,0));
    dead = false;

}//set player body to checkpointPos

bool Player::isFalling()
{
    return inAir;
}

bool Player::isGrounded()
{
    return grounded;
}


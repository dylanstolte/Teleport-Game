#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "Engine.hpp"
#include "Animation.h"

class Engine;
class Animation;
class Player{

public:
    b2Body* body;
    b2PolygonShape shape;
    b2BodyDef bodyDef;

    b2CircleShape circleShape;
    b2FixtureDef fixtureDef;
    b2FixtureDef fixtureDef2;
    b2Fixture* bodyFixture;

    b2World* world;
    sf::Sprite playerSprite;
    sf::RenderWindow* window;
    sf::Texture playerTexture;
    sf::Texture pichuSheet;
    sf::Texture jump;
    Engine* engine;
    Animation idleAnimation;
    Animation runRightAnimation;
    Animation runLeftAnimation;
    Animation jumpAnimation;
    Animation jumpLeftAnimation;
    Animation fallingAnimation;
    Animation attackAnimation;
    sf::Sprite test;
    int numFootContacts = 0;
    bool inAir = true;
    bool grounded = false;
    bool attack = false;
    bool dead = false;
    bool dash = false;
    float acc = .76;
    float dec = .5;
    int health = 70;

    int attackDistance = 10*30;
    float attackPos = 10;
    sf::Vector2f checkpointPos;//(1.f,1.f);
    Player(b2World* world, Engine* engine);
    ~Player();


    void setOrigin(float pos_x, float pos_y);
    void render();
    void respawn(sf::Vector2f checkpointPos);
    void update();
    bool isFalling();
    bool isGrounded();
    float getEuclidianDistance(sf::Vector2f target,sf::Vector2f destination);
    sf::Vector2f getCoordsToPointBetweenPoints(float euclidian,sf::Vector2f target,sf::Vector2f destination,float distance);
};

#endif // PLAYER_H_INCLUDED

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
    b2FixtureDef fixtureDef;

    b2World* world;
    sf::Sprite playerSprite;
    sf::RenderWindow* window;
    sf::Texture playerTexture;
    sf::Texture pichuSheet;
    Engine* engine;
    Animation idleAnimation;
    Animation runRightAnimation;
    Animation runLeftAnimation;
    int numFootContacts = 0;
    float animationCounter;

    Player(b2World* world, Engine* engine);
    ~Player();


    void setOrigin(float pos_x, float pos_y);
    void render();

};

#endif // PLAYER_H_INCLUDED

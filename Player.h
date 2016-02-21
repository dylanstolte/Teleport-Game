#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "Engine.hpp"

class Engine;

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

    Player(b2World* world, Engine* engine);
    ~Player();

    void setTexture(sf::Texture playerTexture);
    void setOrigin(float pos_x, float pos_y);
    void render();

};

#endif // PLAYER_H_INCLUDED

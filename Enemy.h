#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include "SFML/Graphics.hpp"
#include "Engine.hpp"
#include "Animation.h"
class Map;
class Animation;

class Enemy{
public:
    Enemy(b2World* world,Engine* engine, float pos_x, float pos_y);
    ~Enemy();

    b2Body* body;
    b2PolygonShape shape;
    b2BodyDef bodyDef;
    b2FixtureDef fixtureDef;

    Animation walkLeftAnimation;
    Animation walkRightAnimation;

    Map* worldMap;
    b2World* world;

    sf::RenderWindow* window;
    sf::Texture enemyTexture;
    Engine* engine;

    sf::Vector2i originPos;
    sf::Vector2i currentPos;

    void render();
    void moveOnPath();
    sf::Vector2i nextPosition();


};

#endif // ENEMY_H_INCLUDED

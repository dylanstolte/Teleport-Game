#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include "SFML/Graphics.hpp"
#include "Engine.hpp"
#include "Animation.h"
class Map;
class Animation;

class Enemy{
public:
    Enemy(Engine* engine, float pos_x, float pos_y,std::string enemyName);
    ~Enemy();

    b2Body* body;
    b2PolygonShape shape;
    b2BodyDef bodyDef;
    b2FixtureDef fixtureDef;

    Animation walkLeftAnimation;
    Animation walkRightAnimation;

    Map* worldMap;


    sf::RenderWindow* window;
    sf::Texture enemyTexture;
    Engine* engine;

    sf::Vector2i originPos;
    sf::Vector2i currentPos;

    void render();
    void moveOnPath(float x);
    sf::Vector2i nextPosition();
    std::string bodyName;


};

#endif // ENEMY_H_INCLUDED

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
    bool dead = true;
    float respawn = 1;

    Map* worldMap;

    float counter = 0;
    sf::RenderWindow* window;
    sf::Texture enemyTexture;
    Engine* engine;

    sf::Vector2i originPos;
    sf::Vector2i currentPos;

    void update();
    void render();
    void moveOnPath(float x);
    void deleteBody();
    void spawnBody();
    sf::Vector2i nextPosition();
    std::string bodyName;


};

#endif // ENEMY_H_INCLUDED

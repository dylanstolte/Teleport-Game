#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include "SFML/Graphics.hpp"
#include "Engine.hpp"
#include "Animation.h"
class Map;
class Animation;

class Enemy{
public:
    Engine* engine;
    b2Body* body;
    b2PolygonShape shape;
    b2BodyDef bodyDef;
    b2FixtureDef fixtureDef;

    /** Animation */
    Animation walkLeftAnimation;
    Animation walkRightAnimation;

    bool dead = true;
    float respawn = 1;
    float counter = 0;
    int variant;
    std::string bodyName;
    sf::Texture enemyTexture;

    sf::Vector2i originPos;
    sf::Vector2i currentPos;

    Enemy(Engine* engine, float pos_x, float pos_y,std::string enemyName, int variant);
    ~Enemy();

    void update(float time);
    void render();
    void moveOnPath(float x);
    void deleteBody();
    void spawnBody();
    sf::Vector2i nextPosition();

};
#endif // ENEMY_H_INCLUDED

#ifndef MAPBUILDER_H_INCLUDED
#define MAPBUILDER_H_INCLUDED
#include "Engine.hpp"
class engine;
class MapBuilder{
public:

    MapBuilder(Engine* engine);
    ~MapBuilder();
    sf::Vector2i anchorPoint1;
    sf::Vector2i anchorPoint2;
    sf::Vector2i controlPoint1;
    sf::Vector2i curvePoint;
    sf::Vector2i curvePointPrev;
    sf::Vector2f perpPrev;

    bool anchor1 = false;
    bool anchor2 = false;

    Engine *engine;
    sf::CircleShape anchorDot1;
    sf::CircleShape anchorDot2;
    sf::CircleShape controlDot1;
    sf::CircleShape blackDot;
    sf::CircleShape greenDot;

    int xa,ya,xb,yb,x,y;
    int xa2,ya2,xb2,yb2,xprev,yprev;


    void render(int mousex, int mousey);
    int getPt(int n1, int n2, float perc);


};
#endif // MAPBUILDER_H_INCLUDED

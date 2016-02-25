#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED
#include "Engine.hpp"

class Engine;
class Map{

public:

    Engine* engine;
 Map(Engine* engine);
 ~Map();
     sf::Texture GroundTexture;
    sf::Texture BoxTexture;
    sf::Texture platform;
    sf::Texture smallPlatform;
sf::Sprite groundSprite;
    int objectCount = 0;
    std::map<std::string,b2Body*> mapBodies;

    // platform.loadFromFile("grass_box/grass_96x96.png");
int selection = 0;

  void buildMapPerimeter();
  void render();
      /** Create the base for the boxes to land */
    void CreateGround(float X, float Y);
    void createSmallPlatform(float mouse_x,float mouse_y);

    //create a platform
    void createPlatform(float pos_x, float pos_y);
    void placeObject(int selection,int mouse_x, int mouse_y);

};

#endif // MAP_H_INCLUDED

#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED
#include "Engine.hpp"

class Engine;
class Map{

public:

    Engine* engine;
 Map(Engine* engine);
 ~Map();
  void buildMapPerimeter();
  void render();
      /** Create the base for the boxes to land */
    void CreateGround(float X, float Y);

    //create a platform
    void createPlatform(float pos_x, float pos_y);
};

#endif // MAP_H_INCLUDED

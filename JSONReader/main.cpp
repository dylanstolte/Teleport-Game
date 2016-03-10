  #include "b2dJson.h"
  #include "Box2D/Box2D.h"
int main() {

    b2World* myWorld;
    b2Vec2 Gravity(0.f, 9.8f);
    myWorld = new b2World(Gravity);

  b2dJson json;

  json.writeToFile(myWorld, "myfile.json");

  return 0;

 }

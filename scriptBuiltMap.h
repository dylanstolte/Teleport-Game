#ifndef SCRIPTBUILTMAP_H_INCLUDED
#define SCRIPTBUILTMAP_H_INCLUDED

#include "Engine.hpp"

class Engine;

class scriptBuiltMap{

public:

    scriptBuiltMap(Engine* engine);
    ~scriptBuiltMap();

    void load();

    Engine* engine;


};




#endif // SCRIPTBUILTMAP_H_INCLUDED

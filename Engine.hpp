#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED
#include <SFML\Graphics.hpp>
#include <Box2D\Box2D.h>
#include <iostream>
#include <String>
#include <map>
#include "MyContactListener.h"
#include "DebugDraw.h"
#include "Player.h"
#include "Map.h""
#include "Enemy.h"
#include "AssetLoader.h"

class Map;
class Enemy;
class Player;
class MyContactListener;
class AssetLoader;

class Engine
{
public:
   	sf::RenderWindow* Window;
   	b2World* World;

   	sf::View view;
    sf::View backgroundView;
    sf::View midgroundView;
    MyContactListener* listener;
    Player* player;
    Enemy* enemy;
    Map* worldMap;
    AssetLoader* assetLoader;
    //at global scope
    DebugDraw* debugDrawInstance;
   	//THE MAGICAL CLOCK
    sf::Clock clock;
    float frameCounter;
    float switchFrame;
    float frameSpeed;

    /** Prepare textures */
    sf::Texture flash;
    sf::Texture flash_blue;
    sf::Texture background;
    sf::Texture sky;
    sf::Texture tree;
    sf::Texture tree1;
    sf::Texture tree2;
    /////////////// MOVE STATES
    bool moveJump = false;
    bool jumpAnimation = false;
    bool moveRight = false;
    bool moveLeft = false;


    std::map<std::string,b2Body*> worldBodies;
    int MouseX;
    int MouseY;
    bool debug = false;
    /** We need this to easily convert between pixel and real-world coordinates*/
    float SCALE = 30.f;
    //Initializes the engine
	void Init();
	//Main Game Loop
	void mainLoop();
		//Processes user input
	void processInput();
	//Updates all Engine internals
	void update();
    	//Renders one frame
	void renderFrame();



    //create player
    void CreatePlayer(b2World& World, float pos_x, float posy_y);

    /** Create the boxes */
    void CreateBox(b2World& World, int MouseX, int MouseY);


    Engine();
    ~Engine();
};


#endif // ENGINE_HPP_INCLUDED

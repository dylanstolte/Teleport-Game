#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED
#include <SFML\Graphics.hpp>
#include "Box2D/Box2D.h"
#include <iostream>
#include <String>
#include <map>
#include "MyContactListener.h"
#include "DebugDraw.h"
#include "Player.h"
#include "Map.h""
#include "Enemy.h"
#include "AssetLoader.h"
#include "MapBuilder.h"
#include "scriptBuiltMap.h"
#include "b2dJson.h"
#include "b2dJsonImage.h"

class Map;
class Enemy;
class Player;
class MyContactListener;
class AssetLoader;
class MapBuilder;
class scriptBuiltMap;

class Engine
{
public:
   	sf::RenderWindow* Window;
   	b2World* World;

    /**Parallax layers **/
   	sf::View view;
    sf::View backgroundView;
    sf::View midgroundView;

    /**POINTERS TO CLASSES*/
    MyContactListener* listener;
    Player* player;

    Map* worldMap;
    AssetLoader* assetLoader;
    MapBuilder* mapBuilder;
    scriptBuiltMap* ScriptBuiltMap;
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
    sf::CircleShape dot;

    sf::Vertex lineSquares[2];
    int cameraZoom;

    /////////////// MOVE STATES
    bool moveJump = false;
    bool jumpAnimation = false;
    float doubleJumpAnimation = false;
    bool moveRight = false;
    bool moveLeft = false;
    bool mouseLeft = false;
    bool jumpRelease = false;
    bool doubleJumpReset = false;
    bool doDoubleJump = false;
    bool preventJump = false;
    bool moveStop = false;
    int jumpCount = 0;
    void displayAssetSelection();
    std::map<std::string,sf::Sprite>::iterator spriteMapIter;
    std::map<std::string,b2Body*> worldBodies;
    int MouseX;
    int MouseY;
    bool debug = true;
    int camera_hold = false;
    sf::Vector2f camera_pos;

    b2Body** bodies;
    b2Joint** joints;
    b2dJson json;
    bool attackRelease = false;
    //enemy class removal
    std::vector<Enemy*> enemyScheduledForRemoval;

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
	template <typename T>
    std::string ToString(T val);

   //create player
    void CreatePlayer(b2World& World, float pos_x, float posy_y);

    /** Create the boxes */
    void CreateBox(b2World& World, int MouseX, int MouseY);
    void addAssetToWorldMap();
    void displayMouseCoords();


    Engine();
    ~Engine();
};


#endif // ENGINE_HPP_INCLUDED

#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED
#include <SFML\Graphics.hpp>
#include <Box2D\Box2D.h>
#include <iostream>
#include <String>
#include <map>
#include "MyContactListener.h"
#include "DebugDraw.h"

class Engine
{
public:
   	sf::RenderWindow* Window;
   	b2World* World;
   	sf::View view;
    sf::View backgroundView;
    sf::View midgroundView;
    MyContactListener* listener;
    //at global scope
    DebugDraw* debugDrawInstance;
   	//THE MAGICAL CLOCK
    sf::Clock clock;
    float frameCounter;
    float switchFrame;
    float frameSpeed;

    /** Prepare textures */
    sf::Texture GroundTexture;
    sf::Texture BoxTexture;
    sf::Texture platform;
    sf::Texture player;
    sf::Texture flash;
    sf::Texture flash_blue;
    sf::Texture background;
    sf::Texture sky;
    sf::Texture tree;
    sf::Texture tree1;
    sf::Texture tree2;

    std::map<std::string,b2Body*> worldBodies;
    int MouseX;
    int MouseY;
    bool debug = false;
    /** We need this to easily convert between pixel and real-world coordinates*/
    static const float SCALE = 30.f;
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

    /** Create the base for the boxes to land */
    void CreateGround(b2World& World, float X, float Y);

    //create a platform
    void CreatePlatform(b2World& World,float pos_x, float pos_y);

    //create player
    void CreatePlayer(b2World& World, float pos_x, float posy_y);

    /** Create the boxes */
    void CreateBox(b2World& World, int MouseX, int MouseY);


    Engine();
    ~Engine();
};


#endif // ENGINE_HPP_INCLUDED

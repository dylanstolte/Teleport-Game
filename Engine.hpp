#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

class Engine
{
public:
   	sf::RenderWindow* Window;
   	b2World* World;

   	//THE MAGICAL CLOCK
    sf::Clock clock;
    int MouseX;
    int MouseY;
    float frameCounter;
    float switchFrame;
    float frameSpeed;
    float teleCounter;

    int teleport = 0;
    int teleportChain = 0;
    sf::Clock teleportclock;
    b2Vec2 teleportPosition;
    b2Vec2 teleportPositionTemp;
    b2Vec2 teleportPositionOld;
    float teleportDelay = .27;
    float teleport_Distance = 205; //pixels

        /** Prepare textures */
    sf::Texture GroundTexture;
    sf::Texture BoxTexture;
    sf::Texture platform;
    sf::Texture player;
    sf::Texture flash;
    sf::Texture flash_blue;

    std::map<std::string,b2Body*> worldBodies;

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

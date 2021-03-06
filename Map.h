#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED
#include "Engine.hpp"

class Engine;
class b2dJsonImage;
class Enemy;

class Map
{

public:

    Engine* engine;
    Map(Engine* engine);
    ~Map();
    sf::Texture GroundTexture;
    sf::Texture BoxTexture;
    sf::Texture platform;
    sf::Texture smallPlatform;
    sf::Sprite groundSprite;
    Enemy* enemy;

    int objectCount = 0;
    //pointers because bodies are stored in world
    std::vector<b2Body*> mapBodies;
    std::vector<Enemy*> mapEnemies;

    std::vector<sf::Sprite> mapSprites;
    std::vector<b2dJsonImage*> jsonImages;
    int property;

    void save();
    void update(float time);

    void createEnemy();
    void buildMapPerimeter();
    void render();
    /** Create the base for the boxes to land */
    void CreateGround(float X, float Y);
    void createSmallPlatform(float mouse_x,float mouse_y);
    void jsonImageToMapSprites();


    void createPlatform(float pos_x, float pos_y);
    void placeObject(int selection,int mouse_x, int mouse_y);
    void createBodyBox(float pos_x, float pos_y,float width, float height, int property);
    sf::Sprite backgroundSprite;
//    sf::Sprite backgroundSpriteFill;
//    sf::Sprite skySprite;
    sf::Sprite verticalVineSprite;
    sf::Texture verticalVineTexture;

    sf::Sprite rockPlatformSprite;
    sf::Texture rockPlatformTexture;
//    sf::Sprite treeSprite1;
//    sf::Sprite treeSprite2;
    sf::Texture moonbackground;
    sf::View backgroundView;


//    backgroundSpriteFill.setTexture(background);
//    skySprite.setTexture(sky);
//    treeSprite.setTexture(tree);
//    treeSprite1.setTexture(tree1);
//    treeSprite2.setTexture(tree2);
//
//    backgroundSpriteFill.setPosition(1300,0);
//    skySprite.setPosition(0,-800);
//    treeSprite.setPosition(2000,300);
//    treeSprite1.setPosition(900,450);
//    treeSprite2.setPosition(1400,550);
// backgroundView.setCenter(0,0);
//    backgroundView.move( (( (worldBodies["player"]->GetPosition().x*SCALE)+Window->getSize().x*2) /4 ),((worldBodies["player"]->GetPosition().y*SCALE)+Window->getSize().y*2-150) /4  );
//  midgroundView.setCenter(0,0);
//    midgroundView.move( (( (worldBodies["player"]->GetPosition().x*SCALE)+Window->getSize().x*2) /2 ),((worldBodies["player"]->GetPosition().y*SCALE)) /2  );
//    Window->setView(midgroundView);
//    Window->draw(treeSprite);
//    Window->draw(treeSprite1);
//    Window->draw(treeSprite2);

};

#endif // MAP_H_INCLUDED

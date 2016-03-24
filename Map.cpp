#include "Map.h"

Map::Map(Engine* engine)
{
    this->engine = engine;

    backgroundView.reset(sf::FloatRect(0, 0, 1400, 900));
    verticalVineTexture.loadFromFile("AssetLoader/verticalVine.png");
    verticalVineSprite.setTexture(verticalVineTexture);
    verticalVineSprite.scale(sf::Vector2f(.3,.3));
    verticalVineSprite.setPosition(-180,1610);

    rockPlatformTexture.loadFromFile("AssetLoader/rockPlatform.png");
    rockPlatformSprite.setTexture(rockPlatformTexture);
    rockPlatformSprite.scale(sf::Vector2f(1.6,1.6));
    std::cout << "endl"  << std::endl;
    rockPlatformSprite.setPosition(1165,290);



    //create enemy 2

}

Map::~Map() {delete enemy;}
void Map::buildMapPerimeter() {}
void Map::createEnemy()
{
     //create enemy 1
     std::cout << "enemy load" << std::endl;
     enemy = new Enemy(engine,0,100,"Enemy");
     mapEnemies.push_back(enemy);


     enemy = new Enemy(engine,-500,0,"Enemy1");
     mapEnemies.push_back(enemy);

     enemy = new Enemy(engine,800,800,"Enemy2");
     mapEnemies.push_back(enemy);


}

void Map::update()
{
    //get all moving bodies in map
    //create an enemy
    //set proper position of bodies

    enemy = mapEnemies.at(0);

        counter+=engine->clock.getElapsedTime().asSeconds()*5000;
    enemy->moveOnPath(counter);

}

void Map::render()
{
    //render enemies
    for (int i = 0; i < mapEnemies.size(); i++)
    {
        if(mapEnemies.at(i)->body != NULL)
        {
        mapEnemies.at(i)->render();
        }
    }





    //draw sprites in mapSprites
    for (int i = 0; i < mapSprites.size(); i++)
    {
       // std::cout << "render map sprite" << std::endl;
        engine->Window->draw(mapSprites[i]);
    }
    //Place sprites at body locations in mapBodies
    //For all the bodies in the map
    for (int i = 0; i < mapBodies.size(); i++)
    {
        //CHECK object by userData
        b2Body* it = mapBodies.at(i);
        sf::Sprite platformSprite;
        if((int)it->GetUserData() == 13 )//&& it->GetUserData())
        {
            //      std::cout << "in if" << std::endl;
            platformSprite.setTexture(platform);
            //platformSprite.setTextureRect(r1);
            platformSprite.setOrigin(400.f,200.f);
            platformSprite.setPosition(engine->SCALE * it->GetPosition().x, engine->SCALE * it->GetPosition().y);
            platformSprite.setRotation(180/b2_pi * it->GetAngle());
            platformSprite.setScale(.4,.6);
            engine->Window->draw(platformSprite);
        }

        if((int)it->GetUserData() == 12 )//&& it->GetUserData())
        {
            //      std::cout << "in if" << std::endl;
            platformSprite.setTexture(smallPlatform);
            //platformSprite.setTextureRect(r1);
            platformSprite.setOrigin(48.f,48.f);
            platformSprite.setPosition(engine->SCALE * it->GetPosition().x, engine->SCALE * it->GetPosition().y);
            platformSprite.setRotation(180/b2_pi * it->GetAngle());
            //  platformSprite.setScale(.4,.6);
            engine->Window->draw(platformSprite);
        }
        if((int)it->GetUserData() == 9 )//&& it->GetUserData())
        {
            groundSprite.setTexture(GroundTexture);
            groundSprite.setOrigin(512.f, 8.f);
            groundSprite.setPosition(it->GetPosition().x * engine->SCALE, it->GetPosition().y * engine->SCALE);
            groundSprite.setRotation(180/b2_pi * it->GetAngle());
        }
        if((int)it->GetUserData() == 2 )//&& it->GetUserData())
        {
            //get selection
            //draw sprite according to selection
            //set sprite according to body
           // engine->assetLoader->spriteMap["ginso_0"].setOrigin(40,40);
       //    std::cout << "create from asset loader" << std::endl;
            engine->assetLoader->spriteMap["ginso_2"].setPosition(it->GetPosition().x * engine->SCALE, it->GetPosition().y * engine->SCALE);
            engine->assetLoader->spriteMap["ginso_2"].setRotation(180/b2_pi * it->GetAngle());
            engine->Window->draw(engine->assetLoader->spriteMap["ginso_2"]);
        }
        if((int)it->GetUserData() == 1 )//&& it->GetUserData())
        {
            //get selection
            //draw sprite according to selection
            //set sprite according to body
           // engine->assetLoader->spriteMap["ginso_0"].setOrigin(40,40);
       //    std::cout << "create from asset loader" << std::endl;
            engine->assetLoader->spriteMap["ginso_1"].setPosition(it->GetPosition().x * engine->SCALE, it->GetPosition().y * engine->SCALE);
            engine->assetLoader->spriteMap["ginso_1"].setRotation(180/b2_pi * it->GetAngle());
            engine->Window->draw(engine->assetLoader->spriteMap["ginso_1"]);
        }
        if((int)it->GetUserData() == 0 )//&& it->GetUserData())
        {
            //get selection
            //draw sprite according to selection
            //set sprite according to body
           // engine->assetLoader->spriteMap["ginso_0"].setOrigin(40,40);
       //    std::cout << "create from asset loader" << std::endl;
            engine->assetLoader->spriteMap["blueball_0"].setPosition(it->GetPosition().x * engine->SCALE, it->GetPosition().y * engine->SCALE);
            engine->assetLoader->spriteMap["blueball_0"].setRotation(180/b2_pi * it->GetAngle());
            engine->Window->draw(engine->assetLoader->spriteMap["blueball_0"]);
        }
    }

    engine->Window->draw(groundSprite);


}

void Map::jsonImageToMapSprites()
{
    for(int i = 0; i < engine->worldMap->jsonImages.size(); i++)
    {
        //check if the texture needs to be loaded
        b2dJsonImage* image = engine->worldMap->jsonImages[i];
        sf::Texture tempTexture;
        std::cout << "load image: " << image->file << std::endl;

        tempTexture.loadFromFile(image->file);
        engine->assetLoader->textureMap[image->name] = tempTexture;

        sf::Sprite tempSprite;
        tempSprite.setTexture(engine->assetLoader->textureMap[image->name]);
        tempSprite.setOrigin(tempSprite.getLocalBounds().width/2,tempSprite.getLocalBounds().height/2);
        tempSprite.setPosition(image->center.x*engine->SCALE,image->center.y*engine->SCALE);
        //tempSprite.setPosition();
        float scale = image->scale/(tempSprite.getLocalBounds().height/engine->SCALE);
        if(image->flip)
            tempSprite.setScale( scale,scale );
            else
                tempSprite.setScale( -scale,scale );
                //rad to degree
        sf::Color color(image->colorTint[0],image->colorTint[1],image->colorTint[2],image->colorTint[3]);
        color.a = image->opacity*255;
        //set opacity of sprite
        tempSprite.setColor( color );
        tempSprite.setRotation( 180+(image->angle) * 57.2958);
        std::cout << "set angle: " << (image->angle) * 57.2958  << std::endl;

        mapSprites.push_back(tempSprite);
    }
}

void save()
{

//     for(b2Body* BodyIterator = engine->World.GetBodyList();
//     BodyIterator != 0;
//     BodyIterator = BodyIterator->GetNext())
//     {
//
//     }
}

void Map::placeObject(int selection,int mouse_x,int mouse_y)
{
    switch ( selection)
    {
    case 1:
        createSmallPlatform(mouse_x,mouse_y);
        //  engine->Window->draw(groundSprite);
        break;
    case 2:
       createPlatform(mouse_x,mouse_y);
     // createBodyBox(200,200,150,25);
        break;
    case 3:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["ginso_0"],0,mouse_x,mouse_y);
           // engine->Window->draw(engine->assetLoader->spriteMap["ginso_0"]);
        }
        break;
    case 4:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["ginso_1"],1,mouse_x,mouse_y);
        }
        break;
    case 5:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["ginso_2"],2,mouse_x,mouse_y);
        }
        break;
    case 6:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["mountain_0"],0,mouse_x,mouse_y);
        }
        break;
    case 7:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["mountain_1"],1,mouse_x,mouse_y);
        }
        break;
    case 8:
        {
           engine->assetLoader->createBody(engine->assetLoader->spriteMap["mountain_2"],2,mouse_x,mouse_y);
        }
        break;
    }

}

void Map::createBodyBox(float pos_x, float pos_y,float width, float height, int property)
{
     b2BodyDef BodyDef;

    sf::Vector2i temp1 = engine->Window->mapCoordsToPixel(sf::Vector2f(pos_x,pos_y));
    sf::Vector2f temp = engine->Window->mapPixelToCoords(sf::Vector2i(pos_x,pos_y));
    BodyDef.position = b2Vec2((pos_x)/engine->SCALE, (pos_y)/engine->SCALE);
    std::cout << "passeds" << pos_x << " " << pos_y << std::endl;
    std::cout << "coords to pix" << temp1.x << " " << temp1.y << std::endl;
    std::cout << "pix to coords" << temp.x << " " << temp.y << std::endl;

    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies.push_back(Body);
    objectCount++;
    int id = 4;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((width/2)/engine->SCALE, (height/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 1.f;
    FixtureDef.friction = 1.0f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);

}

void Map::createPlatform(float pos_x, float pos_y   )
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies.push_back(Body);
    objectCount++;
    int id = 13;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((800*.4f/2)/engine->SCALE, (300*.6f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 100.f;
    FixtureDef.friction = 10.0f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);

}

void Map::CreateGround(float X, float Y)
{
    b2BodyDef BodyDef;
    BodyDef.position = b2Vec2(X/engine->SCALE, Y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies.push_back(Body);
    int id = 9;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((1024*2.f)/engine->SCALE, (16.f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 0.f;
    FixtureDef.friction = 1.0f;
    FixtureDef.shape = &Shape;
    b2Fixture* bodyFixture = Body->CreateFixture(&FixtureDef);
    bodyFixture->SetUserData((void*) id);
}

void Map::createSmallPlatform(float pos_x, float pos_y)
{
    std::cout << "create platform"  << pos_x << " " << pos_y << std::endl;

    b2BodyDef BodyDef;
 BodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
    BodyDef.type = b2_staticBody;
    b2Body* Body = engine->World->CreateBody(&BodyDef);

    mapBodies.push_back(Body);
    objectCount++;
    int id = 12;
    Body->SetUserData((void*)id);

    b2PolygonShape Shape;
    Shape.SetAsBox((96.f/2)/engine->SCALE, (96.f/2)/engine->SCALE);
    b2FixtureDef FixtureDef;
    FixtureDef.density = 100.f;
    FixtureDef.friction = 50.0f;
    FixtureDef.shape = &Shape;
    Body->CreateFixture(&FixtureDef);


}

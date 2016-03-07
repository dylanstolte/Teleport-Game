#include "AssetLoader.h"
#include <sstream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;
AssetLoader::AssetLoader(Engine* engine)
{
    this->engine = engine;
    std::string assetDirectory = "C:\\Users\\Zbook15G2\\git\\Teleport-Game\\AssetLoader\\Assets";
    std::string assetInfoDirectory = "C:\\Users\\Zbook15G2\\git\\Teleport-Game\\AssetLoader\\Info";
   // assetFileNames.resize(10);
    loadAssets(assetDirectory,assetInfoDirectory);
}

void AssetLoader::loadAssets(const std::string &assetDirectory,const std::string &assetInfoDirectory)
{
    //get asset files
    getFileNames(assetFileNames,assetDirectory);

    //get asset infoFile
    getFileNames(assetInfoNames,assetInfoDirectory);

    //load  1 asset info into maps
    //needs to be in while loop
    for(int i = 0; i < assetInfoNames.size(); i++)
        readAssetInfo(assetInfoNames.at(i),i);

    //load asset textures
    loadTextures(textureMap,assetFileNames);

    //create asset bodies and sprites
    //for every asset sheet
    //for every sprite on asset sheet
    for(int i = 0; i < assetFileNames.size(); i++)
    {
       //NEED A WAY TO GET TOTAL SPRITES IN INFO LIST
        for(int j = 0; j < 3; j++)
        {
            createSprite(assetFileNames.at(i),j);
            //only create the body when you add the sprite to
            //createBody(createSprite(assetFileNames.at(i),j),j);
        }

    }
}
void AssetLoader::readAssetInfo(std::string fileName,int assetIndicator)
{
//std::cout << "read asset info" << std::endl;
    std::ifstream infile(fileName);
    std::string line;
    std::string dummyLine;
    std::getline(infile, dummyLine);
    for(int i = 0; std::getline(infile, line); i++)
    {
   std::cout << "reading file lines" << std::endl;
        std::istringstream iss(line);
        int spriteIndicator, posx, posy, sizex, sizey, originx, originy;
        if (!(iss >> spriteIndicator >> posx >> posy >> sizex >> sizey >> originx >> originy))
        {
                  std::cout << "eror reading asset info file" << std::endl;
            break;

        } // error

      //  std::cout << assetFileNames.at(assetIndicator) << spriteIndicator << posx << posy << sizex << sizey << originx << originy << std::endl;
        pos_xMap[assetFileNames.at(assetIndicator)][spriteIndicator] = posx;
        pos_yMap[assetFileNames.at(assetIndicator)][spriteIndicator] = posy;
        size_xMap[assetFileNames.at(assetIndicator)][spriteIndicator] = sizex;
        size_yMap[assetFileNames.at(assetIndicator)][spriteIndicator] = sizey;
        origin_xMap[assetFileNames.at(assetIndicator)][spriteIndicator] = originx;
        origin_yMap[assetFileNames.at(assetIndicator)][spriteIndicator] = originy;
    }

};
//pust all textures from filename list into texture list vector
void AssetLoader::loadTextures(std::map<std::string,sf::Texture> &out,std::vector<std::string> &fileNames)
{
    sf::Texture texture;
    for(int i = 0; i < assetFileNames.size(); i++)
    {
        texture.loadFromFile(assetFileNames.at(i));
        textureMap[assetFileNames.at(i)] = texture;
    }
}
void AssetLoader::createSprite(std::string fileName,int spriteIndicator)
{
    sf::Sprite sprite;
    sprite.setTexture(textureMap[fileName]);
    sf::IntRect rect( pos_xMap[fileName][spriteIndicator], pos_yMap[fileName][spriteIndicator],size_xMap[fileName][spriteIndicator],size_yMap[fileName][spriteIndicator]);
    sprite.setTextureRect(rect);
  //  cout << "higher: " << sprite.getTextureRect().left << sprite.getTextureRect().top << sprite.getTextureRect().width << sprite.getTextureRect().height << endl;

    sprite.setOrigin(origin_xMap[fileName][spriteIndicator],origin_yMap[fileName][spriteIndicator]);
   // sprite.setPosition(0,0);

    char str[50];
    sprintf(str, "%d", spriteIndicator);
    spriteMap[getBaseFilename(fileName) + "_" + str] = sprite;
   // cout << "lower: " << sprite.getTextureRect().left << sprite.getTextureRect().top << sprite.getTextureRect().width << sprite.getTextureRect().height << endl;
    //cout << spriteMap[getBaseFilename(fileName) + "_" + str].getTextureRect().left << endl;


};

void AssetLoader::createBody(std::string fileName,int spriteIndicator)
{
    this->engine = engine;
    bodyDef.position = b2Vec2(pos_xMap[fileName][spriteIndicator]/engine->SCALE, pos_yMap[fileName][spriteIndicator]/engine->SCALE);
    bodyDef.type = b2_dynamicBody;
    //add body to box2d world
    body = engine->World->CreateBody(&bodyDef);

    int id = 10;
    body->SetUserData((void*)id);

    cout << fileName << "   " << pos_xMap[fileName][spriteIndicator] << endl;
    shape.SetAsBox((size_xMap[fileName][spriteIndicator]/2)/engine->SCALE, (size_yMap[fileName][spriteIndicator]/2)/engine->SCALE);
    fixtureDef.density = 3.f;
    fixtureDef.friction = 1.f;
    fixtureDef.shape = &shape;

    //add fixture to body (bodies can have multiple fixtures)
    body->CreateFixture(&fixtureDef);



};

b2Body* AssetLoader::createBody(sf::Sprite sprite,int spriteIndicator,int pos_x, int pos_y)
{
    this->engine = engine;
    bodyDef.position = b2Vec2(pos_x/engine->SCALE, pos_y/engine->SCALE);
    bodyDef.type = b2_staticBody;
    //add body to box2d world
    body = engine->World->CreateBody(&bodyDef);

    //how to make this unique
    char str[50];
    sprintf(str, "%d", spriteIndicator);

    int id = spriteIndicator;
    body->SetUserData((void*)id);
    engine->worldMap->mapBodies.push_back(body);

//    char str[50];
//    sprintf(str, "%d", spriteIndicator);
  //  body->SetUserData(static_cast<void*>(getBaseFilename(fileName) + "_" + str));

  //  cout << fileName << "   " << pos_xMap[fileName][spriteIndicator] << endl;
    shape.SetAsBox((sprite.getTextureRect().width/2)/engine->SCALE, (sprite.getTextureRect().height/2)/engine->SCALE);
    fixtureDef.density = 3.f;
    fixtureDef.friction = 1.f;
    fixtureDef.shape = &shape;

    //add fixture to body (bodies can have multiple fixtures)
    body->CreateFixture(&fixtureDef);
    return body;


};

void AssetLoader::getFileNames(std::vector<std::string> &out, const std::string &directory)
{
#ifdef WINDOWS
    HANDLE dir;
    WIN32_FIND_DATA file_data;

    if ((dir = FindFirstFile((directory + "/*").c_str(), &file_data)) == INVALID_HANDLE_VALUE)
        return; /* No files found */

    do
    {
        const string file_name = file_data.cFileName;
        const string full_file_name = directory + "/" + file_name;
        const bool is_directory = (file_data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0;

        if (file_name[0] == '.')
            continue;

        if (is_directory)
            continue;

        out.push_back(full_file_name);
    }
    while (FindNextFile(dir, &file_data));

    FindClose(dir);
#else
    DIR *dir;
    class dirent *ent;
    class stat st;

    dir = opendir(directory.c_str());
    while ((ent = readdir(dir)) != NULL)
    {
        const string file_name = ent->d_name;
        const string full_file_name = directory + "\\" + file_name;

        if (file_name[0] == '.')
            continue;

        if (stat(full_file_name.c_str(), &st) == -1)
            continue;

        const bool is_directory = (st.st_mode & S_IFDIR) != 0;

        if (is_directory)
            continue;

        out.push_back(full_file_name);
    }
    closedir(dir);
#endif
} // GetFilesInDirectory

std::string AssetLoader::getBaseFilename(const std::string &filename)
{
    char sep = '\\';
    string file = sep+filename;


    size_t i = file.rfind(sep, file.length());
    if (i != string::npos)
    {
        string fullname = file.substr(i+1, file.length() - i);
        size_t lastindex = fullname.find_last_of(".");
        string rawname = fullname.substr(0, lastindex);
        return(rawname);
    }
    return("");
}

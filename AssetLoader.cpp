#include "AssetLoader.h"
#include <sstream>
#include <string>
#include <fstream>
#include <windows.h>
//#define WINDOWS
//load fileb
//
//for each sprite in file
//get sizex,y and position x,y
//make spriite
//make body
//store both sprite and
//   Returns a list of files in a directory (except the ones that begin with a dot)
using namespace std;
AssetLoader::AssetLoader()
{
    std::string assetDirectory = "C:\\Users\\8470w\\git\\Teleport-Game\\AssetLoader\\Assets";
    std::string assetInfoDirectory = "C:\\Users\\8470w\\git\\Teleport-Game\\AssetLoader\\Info";
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
        //  std::cout << assetFileNames.at(i) << std::endl;
     //   readAssetInfo(assetInfoNames.at(i),i);
        for(int j = 0; j < 4; j++)
            createSprite(assetFileNames.at(i),j);
    }
}
void AssetLoader::readAssetInfo(std::string fileName,int assetIndicator)
{
    //open file
    //read line by line
    //columns seperated by tabs
    //skip one line of column headers
    //read spriteindicator int first column
    //red pos x second column
    //read pos y third column
    //read size x 4th column
    //read size y 5th column
    //read oritinx 6th
    //read originy 7th
//std::cout << "read asset info" << std::endl;
    std::ifstream infile(fileName);
    std::string line;
    std::string dummyLine;
    std::getline(infile, dummyLine);
    for(int i = 0; std::getline(infile, line); i++)
    {
//   std::cout << "reading file lines" << std::endl;
        std::istringstream iss(line);
        int spriteIndicator, posx, posy, sizex, sizey, originx, originy;
        if (!(iss >> spriteIndicator >> posx >> posy >> sizex >> sizey >> originx >> originy))
        {
            //      std::cout << "eror reading asset info file" << std::endl;
            break;

        } // error

        std::cout << assetFileNames.at(assetIndicator) << spriteIndicator << posx << posy << sizex << sizey << originx << originy << std::endl;
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
     std::cout << pos_xMap[fileName][spriteIndicator] << "indicator" <<spriteIndicator << std::endl;
    sf::IntRect rect( pos_xMap[fileName][spriteIndicator], pos_xMap[fileName][spriteIndicator],size_xMap[fileName][spriteIndicator],size_xMap[fileName][spriteIndicator]);
    sprite.setTextureRect(rect);
    sprite.setOrigin(origin_xMap[fileName][spriteIndicator],origin_yMap[fileName][spriteIndicator]);
    sprite.setPosition(0,0);

    char str[50];
    sprintf(str, "%d", spriteIndicator);
    spriteMap[getBaseFilename(fileName) + "_" + str] = sprite;
    cout << spriteMap[getBaseFilename(fileName) + "_" + str].getTextureRect().left << endl;


};

void AssetLoader::createBody() {};

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

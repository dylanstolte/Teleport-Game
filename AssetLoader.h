#ifndef ASSETLOADER_H_INCLUDED
#define ASSETLOADER_H_INCLUDED
#include <vector>
#include <string>
#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include "Engine.hpp"

class AssetLoader{
public:

    AssetLoader();
    ~AssetLoader();
    void createSprite(std::string fileName,int spriteIndicator);
    void createBody();
    void readAssetInfo(std::string assetinfofileName,int assetIndicator);
    void loadTextures(std::map<std::string,sf::Texture> &out,std::vector<std::string> &fileNames);
    void getFileNames(std::vector<std::string> &out, const std::string &directory);
    void loadAssets(const std::string &assetdirectory, const std::string &infodirectoyr);
    std::string getBaseFilename(const std::string &filename);
    std::vector<std::string> assetFileNames;
    std::vector<std::string> assetInfoNames;
    //no pointers this is where they are stored
    //string is filename with path and extension
    std::map<std::string,sf::Texture> textureMap;
    //string is file(sprintsheet) + sprint indicator int(sprint 3 on the page or sprite 5)
    std::map<std::string,b2Body*> bodyMap;
    //string is file+sprintindicator int
    std::map<std::string,sf::Sprite> spriteMap;


    std::map<std::string,std::map<int,int>> pos_xMap;
    std::map<std::string,std::map<int,int>> pos_yMap;
    std::map<std::string,std::map<int,int>> size_xMap;
    std::map<std::string,std::map<int,int>> size_yMap;
    std::map<std::string,std::map<int,int>> origin_xMap;
    std::map<std::string,std::map<int,int>> origin_yMap;

};

#endif // ASSETLOADER_H_INCLUDED

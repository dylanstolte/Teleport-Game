#include <iostream>
#include <fstream>
#include <vector>
#include <dirent.h>
#include <sys/stat.h>
#include <sstream>

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open ("scriptBuiltMap.cpp");

    string cppWrap = "#include \"scriptBuiltMap.h\" \n scriptBuiltMap::scriptBuiltMap(Engine* engine){this->engine = engine;}; \n scriptBuiltMap::~scriptBuiltMap(){delete this->engine;}; \n void scriptBuiltMap::load() { \n engine->joints = (b2Joint**)b2Alloc(0 * sizeof(b2Joint*)); \n engine->bodies = (b2Body**)b2Alloc(1 * sizeof(b2Body*)); \n ";
    myfile << cppWrap << endl;
    std::ifstream infile("rubeExport.txt");
    std::string line;
    for(int i = 0; std::getline(infile, line); i++)
    {
        cout << "processing: " << line << endl;
        std::istringstream iss(line);

        string smallString = "bodies";
        if(line.find(smallString)  != std::string::npos )
        {
            cout << "found bodies" << endl;
            string in = "engine->bodies";
            line.replace(line.find(smallString),6,in);
            cout << "new Line: " << line << endl;


        }

        if(line.find("joints")  != std::string::npos )
        {
            cout << "found joints" << endl;
            string in = "engine->joints";
            line.replace(line.find("joints"),6,in);
            cout << "new Line: " << line << endl;


        }

        if(line.find("m_world")  != std::string::npos )
        {
            cout << "found m_World" << endl;

            std::cout << "appending engine-> " << endl;
            string in = "engine->World";
            line.replace(line.find_first_of("m"),7,in);
            cout << "new Line: " << line << endl;


        }

        if(line.find("bd.gravityScale")  == std::string::npos
           && line.find("b2Free(joints);")  == std::string::npos
           && line.find("b2Free(bodies);")  == std::string::npos
           && line.find("joints = NULL;")  == std::string::npos
           && line.find("engine->bodies = NULL;")  == std::string::npos)
        {
            if(i > 13 )
            {
            myfile << line;
            myfile << endl;
            }

        }

        // if(line.find(smallString)  != std::string::npos )

    }
    myfile << "}";

    myfile.close();
}



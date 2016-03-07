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

    string cppWrap = "#include \"scriptBuiltMap.h\" \n scriptBuiltMap::scriptBuiltMap(Engine* engine){this->engine = engine;}; \n scriptBuiltMap::~scriptBuiltMap(){delete this->engine;}; \n void scriptBuiltMap::load() { \n ";
    myfile << cppWrap << endl;
    std::ifstream infile("rubeExport.txt");
    std::string line;
    for(int i = 0; std::getline(infile, line); i++)
    {
        cout << "processing: " << line << endl;
        std::istringstream iss(line);

        if(line.find("b2Joint** joints")  != std::string::npos )
        {
            cout << "found joints decleration" << endl;
            string in = "joints";
            line.replace(line.find("b2Joint** joints"),16,in);
            cout << "new Line: " << line << endl;


        }

        if(line.find("b2Body** bodies")  != std::string::npos )
        {
            cout << "found  bodies decleration" << endl;
            string in = "bodies";
            line.replace(line.find("b2Body** bodies"),15,in);
            cout << "new Line: " << line << endl;


        }


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
           && line.find("b2Free(engine->joints);")  == std::string::npos
           && line.find("b2Free(engine->bodies);")  == std::string::npos
           && line.find("joints = NULL;")  == std::string::npos
           && line.find("bodies = NULL;")  == std::string::npos)
        {


            if(i > 11 )
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



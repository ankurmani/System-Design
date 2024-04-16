#include<iostream>
#include "FileSystem.hpp"
using namespace std;

class File : public FileSystem{
        string Files;
    public:
        File(string Files){
            this->Files = Files;
        }
        void add(FileSystem* DirectoryFile){}
        void ls(){
            cout << "File in directory is : " << this->Files << endl;
        }
};
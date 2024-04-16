#include<iostream>
#include<vector>
#include "FileSystem.hpp"
using namespace std;

class Directory : public FileSystem{
        string Directoryname;
        vector<FileSystem*> Dir;
    public:
        Directory(string DirectoryFiles){
            this->Directoryname = DirectoryFiles;
        }
        void add(FileSystem* DirectoryFile){
            this->Dir.push_back(DirectoryFile);
        }
        void ls(){
            cout << "Directory name is : " << this->Directoryname << endl;
            for(auto it : Dir){
                it->ls();
            }
        }
};
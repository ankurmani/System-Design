#include<iostream>
#include "FileSystem.hpp"
#include "Directory.cpp"
#include "File.cpp"
using namespace std;

int main(){
    FileSystem* file1 = new File("hulchul");
    FileSystem* file2 = new File("GolMal");
    FileSystem* file3 = new File("3Ediot");
    FileSystem* Dir = new Directory("movies");
    FileSystem* Dir1 = new Directory("good Movies");
    Dir->add(file1);
    Dir->add(file2);
    Dir->add(file3);
    Dir->add(Dir1);
    FileSystem* file4 = new File("Anand");
    FileSystem* file5 = new File("12thfail");

    Dir1->add(file4);
    Dir1->add(file5);

    Dir->ls();

    delete Dir;
    return 0;
}
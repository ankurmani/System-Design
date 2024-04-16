#include<iostream>
#include "logger.hpp"
#include <thread>
using namespace std;

void user1(){
    Logger* loginstance1 = Logger::Loggerinstance();
    loginstance1->Log("this msg is from user 1");
}
void user2(){
    Logger* loginstance2 = Logger::Loggerinstance();
    loginstance2->Log("this msg is from user 2");
}
int main(){
    std::thread t1(user1);
    std::thread t2(user2);

    t1.join();
    t2.join();
    return 0;
    
}
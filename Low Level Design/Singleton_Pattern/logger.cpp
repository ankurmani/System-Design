#include "logger.hpp"

#include<iostream>
using namespace std;

int Logger::ctr = 0;
Logger* Logger::loggerinst = nullptr;
mutex Logger::mtx;

Logger::Logger(){
    ctr++;
    cout << "instance is created id: " << ctr <<  endl;
}
Logger* Logger::Loggerinstance(){
    if(Logger::loggerinst == nullptr){
        mtx.lock(); // since i don't need lock for all cases so don't put it all the time, so do double check locking since thy are very expensive
        if(Logger::loggerinst == nullptr)
            Logger::loggerinst =  new Logger();
        mtx.unlock();
    }
    return Logger::loggerinst;
}
void Logger::Log(string msg){
    cout << msg << endl;
}
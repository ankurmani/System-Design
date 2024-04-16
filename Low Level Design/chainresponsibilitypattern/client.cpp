#include<iostream>
#include "Logger.hpp"
#include "DebugLogger.cpp"
#include "ErrorLogger.cpp"
#include "InfoLogger.cpp"
using namespace std;


int main(){
    Logger* log;
    log = new InfoLogger(new DebugLogger( new ErrorLogger(NULL)));

    log->log(1, "Info log");
    log->log(2, "Debug log");
    log->log(3, "Error log");
    log->log(4, "No log");
    delete log;
    return 0;
}
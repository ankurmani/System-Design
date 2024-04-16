#include<iostream>
#include "Logger.hpp"
using namespace std;

class DebugLogger : public Logger{
    Logger* nextLogger;
    public:
        DebugLogger(Logger* nextLogger){
           this->nextLogger = nextLogger;
        }
        void log(int logger, string message){
            if(logger == 2){
                cout << "Logger : " << logger << " log : " << message << endl;
            }
            else{
                this->nextLogger->log(logger, message);
            }

        }
};
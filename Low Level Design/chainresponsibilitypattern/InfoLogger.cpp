#include<iostream>
#include "Logger.hpp"
using namespace std;

class InfoLogger : public Logger{
    Logger* nextLogger;
    public:
        InfoLogger(Logger* nextLogger){
           this->nextLogger = nextLogger;
        }
        void log(int logger, string message){
            if(logger == 1){
                cout << "Logger : " << logger << " log : " << message << endl;
            }
            else{
                this->nextLogger->log(logger, message);
            }

        }
};
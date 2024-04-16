#include<iostream>
#include "Logger.hpp"
using namespace std;

class ErrorLogger : public Logger{
    Logger* nextLogger;
    public:
        ErrorLogger(Logger* nextLogger){
           this->nextLogger = nextLogger;
        }
        void log(int logger, string message){
            if(logger == 3){
                cout << "Logger : " << logger << " log : " << message << endl;
            }
            else{
                this->nextLogger->log(logger, message);
            }

        }
};
#ifndef LOGGER_HPP
#define LOGGER_HPP
#include<string>
using namespace std;

class Logger{
    public:
        virtual void log(int logger, string message) = 0;
};

#endif
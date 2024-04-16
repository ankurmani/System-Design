#ifndef logger_h
#define logger_h
#include<mutex>
#include<string>
using namespace std;

class Logger{
    private:
        static int ctr;
        static Logger* loggerinst;
        static mutex mtx;
        Logger() = delete;
        Logger(const Logger&) = delete;
        Logger operator=(const Logger &) = delete;
        
    public:
        static Logger* Loggerinstance();
        void Log(string msg);
};

#endif
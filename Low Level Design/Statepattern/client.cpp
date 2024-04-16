#include<iostream>
using namespace std;

class State{
    public:
        virtual State* handle() = 0;
};

class ConA : public State{
    public:
        State* handle(){
            cout << "ConA is called" << endl;
        }
};

class ConB : public State{
    public:
        State* handle(){
            cout << "ConB is called" << endl;
            return new ConA();
        }
};

class Context{
    State* st;
    public:
        State* request(){
            return new ConB();
        }
};

int main(){
    Context* cont;
    State* st = cont->request();
    State* st1 = st->handle();
    State* st2 = st1->handle();
    delete st2; // Remember to delete dynamically allocated memory
    delete st1;
    delete st;
    return 0;

}
#include<iostream>
#include "ATMclient.cpp"

using namespace std;

int main(){
    ATMclient* cl = new ATMclient();
    cl->clientApp();
}
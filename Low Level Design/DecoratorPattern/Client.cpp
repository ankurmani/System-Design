#include<iostream>
using namespace std;

class PizzaAbstract{
    public:
        virtual int cost() = 0;
};

class Magarita : public PizzaAbstract{
    public:
        int cost() override {
            return 100;
        }
};

class Veggie : public PizzaAbstract{
    public:
        int cost() override{
            return 200;
        }
};

class Farmhouse : public PizzaAbstract{
    public:
        int cost() override{
            return 300;
        }
};



class Topping : public PizzaAbstract{
    protected:
    public:
        virtual int cost() = 0;
};

class cheese : public Topping{
    private: 
        PizzaAbstract* basepizza;
    public:
        cheese(PizzaAbstract* pbasepizza){
            this->basepizza = pbasepizza;
        }
        int cost() override {
            return this->basepizza->cost()+50;
        }
};

class cheeseBurst : public Topping{
    private: 
        PizzaAbstract* basepizza;
    public:
        cheeseBurst(PizzaAbstract* pbasepizza){
            this->basepizza = pbasepizza;
        }
        int cost() override {
            return this->basepizza->cost()+50;
        }
};

class Mushroom : public Topping{
    private: 
        PizzaAbstract* basepizza;
    public:
        Mushroom(PizzaAbstract* pbasepizza){
            this->basepizza = pbasepizza;
        }
        int cost() override {
            return this->basepizza->cost()+50;
        }
};

class Paneer : public Topping{
    private: 
        PizzaAbstract* basepizza;
    public:
        Paneer(PizzaAbstract* pbasepizza){
            this->basepizza = pbasepizza;
        }
        int cost() override {
            return this->basepizza->cost()+50;
        }
};

int main(){
    PizzaAbstract* basepizza = new Magarita();
    cout<< "your base pizza cost is :" << basepizza->cost() << endl;
    PizzaAbstract* basepizzawithcheese = new cheeseBurst(basepizza);
    PizzaAbstract* basepizzawcwpaneer = new Paneer(basepizzawithcheese);
    cout<< "your Total pizza cost is :" << basepizzawcwpaneer->cost() << endl;

    delete basepizza;
    delete basepizzawithcheese;
    delete basepizzawcwpaneer;
    return 0;
}
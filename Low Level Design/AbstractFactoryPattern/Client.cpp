#include<iostream>
using namespace std;

class IButton{
    public:
        virtual void CreateButton() = 0;
        virtual void press() = 0;
};

class ItextBox{
    public:
        virtual void CreateTextBox() = 0;
        virtual void showText() = 0;
};

class MacTextBox: public ItextBox{
    public:
        void CreateTextBox(){
            cout << "Mac TextBox is created" << endl;
        }
        void showText(){
            cout << "Mac Text is shown as this" << endl;
        }
};

class MacButton: public IButton{
    public:
        void CreateButton(){
            cout << "Mac IButton is created" << endl;
        }
        void press(){
            cout << "Mac IButton is shown as this" << endl;
        }
};

class WinTextBox: public ItextBox{
    public:
        void CreateTextBox(){
            cout << "Win TextBox is created" << endl;
        }
        void showText(){
            cout << "Win Text is shown as this" << endl;
        }
};

class WinButton: public IButton{
    public:
        void CreateButton(){
            cout << "Win IButton is created" << endl;
        }
        void press(){
            cout << "Win IButton is shown as this" << endl;
        }
};

class IFactory{
    public:
        virtual IButton* CreateButton() = 0;
        virtual ItextBox* createTextBox() = 0;
};

class Macos : public IFactory{
    public:
        IButton* CreateButton(){
            return new MacButton();
        }
        ItextBox* createTextBox(){
            return new MacTextBox();
        }
};

class Winos: public IFactory{
    public:
        IButton* CreateButton(){
            return new WinButton();
        }
        ItextBox* createTextBox(){
            return new WinTextBox();
        }
};

class GUIAbstractFactory{
    public:
        static IFactory* createFactory(string osType){
            IFactory* GUIobj;
            if(osType == "mac"){
                GUIobj = new Macos();
            }
            else{
                GUIobj = new Winos();
            }
            return GUIobj;
        }
};

int main(){
    cout <<"Enter your machine OS" << endl;
    string osType;
    cin>>osType;

    IFactory* fact = GUIAbstractFactory::createFactory(osType);

    IButton* button = fact->CreateButton();
    button->press();

    ItextBox* textbox = fact->createTextBox();
    textbox->showText();

    return 0;
}
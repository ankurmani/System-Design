#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class User_abstract{
    public:
        virtual int getUserId() = 0;
};
class User : public User_abstract{
    private:
        int UserId;
    public:
        User(int user){
            this->UserId = user;
        }
        int getUserId() override {
            return UserId;
        }    
};
class group_abstract{
    public:
        virtual void Subscribe(User* user) = 0;
        virtual void UnSubscribe(User* user) = 0;
        virtual void notify() = 0;
};
class group : public group_abstract{
    private:
        vector<int> subscribedUser;
    public:
        void Subscribe(User* user) override { 
            int userid = user->getUserId();
            cout << "User subscribed : " << userid << endl;
            subscribedUser.push_back(userid);
         }
        void UnSubscribe(User* user) override {
            int userid = user->getUserId();
            if(std::find(subscribedUser.begin(), subscribedUser.end(), userid) != subscribedUser.end()){
                cout << "User unsubscribed : " << userid << endl;
                subscribedUser.erase(std::find(subscribedUser.begin(), subscribedUser.end(), userid));
            }
        } 
        void notify() override {
            for(int i=0;i<subscribedUser.size();i++)
                cout << "Notification sent to userId: " << subscribedUser[i] << endl;
        }
        
};
int main(){
    group* gr = new group();

    User* user1 = new User(1);
    User* user2 = new User(2);

    gr->Subscribe(user1);
    gr->Subscribe(user2);

    gr->notify();

    gr->UnSubscribe(user1);

    gr->notify();

    return 0;

}
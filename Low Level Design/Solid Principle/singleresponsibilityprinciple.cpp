#include<iostream>
#include<vector>
using namespace std;

// Class customer has multiple reason of changes which will cause issue with respect to maintability and scalability. 
class Item{
private:
    string name;
    string Id;
    float price;
public:
    Item(string name, string Id, float price){
        this->name = name;
        this->Id = Id;
        this->price = price;
    }
    string getId(){return Id;}
    float getprice(){return price;}

};

class Customer{
private:
	string name;
	int id;
	vector<Item> Items;
	float totalAmount;
public:
	void setname(string name);
	string getName();
	int getId();
	void addItem(Item item);
	void removeItem(Item item);
	float calculateTotalSum();
	string generateInvoice();
};
//Above customer class can be divided into smaller such that each class has single reason of change making it easier to understand, maintain, and scale.
// The Customer class is segregated to CustomerPersonalDetails, ItemDetails and generateInvoice all of them have there own functionality.

class CustomerPersonalDetails{
private:
	string name;
	int Id;
public:
	void setName(string name, int Id){ this->name = name; this->Id = Id; }
	string getName(){ return name; }
	int getId(){ return Id; }
};
class ItemDetails{
private:
	vector<Item> items;
	float totalAmount;
public:
	void addItem(const Item& item){items.push_back(item);}
	void removeItem(const string& itemId){
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getId() == itemId) {
                items.erase(it);
                break;
            }
        }
    };
	float calculateTotalSum(){
        float total = 0;
        for(auto it : items){
            total += it.getprice();
        }
        return total;
    }
    vector<Item> getItems(){
        return items;
    }
};
class GenerateInvoice{
public:
	void printInvoice(const vector<Item>& items){
        float total = 0;
        for(auto it : items){
            total += it.getprice();
        }
        cout << "Your bill is : " << total << endl;
    }
};

int main() {
    // Example usage
    CustomerPersonalDetails customer;
    customer.setName("John Doe", 123);

    ItemDetails itemDetails;
    itemDetails.addItem(Item("Item1", "1", 10.5));
    itemDetails.addItem(Item("Item2", "2", 20.75));

    GenerateInvoice invoiceGenerator;
    invoiceGenerator.printInvoice(itemDetails.getItems());

    return 0;
}
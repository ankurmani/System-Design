#include<iostream>
#include<vector>
using namespace std;

// Class customer has multiple reason of changes which will cause issue with respect to maintability and scalability. 
class Item_abstract{
public:
    virtual ~Item_abstract(){}
    virtual string getId() const = 0;
    virtual float getprice() const = 0;;
};

class Item : public Item_abstract{
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
    string getId() const override {return Id;}
    float getprice() const override {return price;}

};

class ExpensiveItem : public Item_abstract {
private:
    string name;
    string id;
    float price;
public:
    ExpensiveItem(string name, string id, float price) : name(name), id(id), price(price) {}
    string getId() const override { return id; }
    // Violating LSP: getPrice() always returns a higher price
    float getprice() const override { return price * 2; } // Return price twice as high
};

class CustomerPersonalDetails_abstract{
public:
    virtual void setName(string name, int Id) = 0;
    virtual string getName() const = 0;
    virtual int getId() const = 0;
};

class CustomerPersonalDetails : public CustomerPersonalDetails_abstract{
private:
	string name;
	int Id;
public:
	void setName(string name, int Id) override { this->name = name; this->Id = Id; }
	string getName()const override { return name; }
	int getId() const override { return Id; }
};

class ItemDetails_Abstract{
public:
    virtual void addItem(Item_abstract* item) = 0;
    virtual void removeItem(const string& itemId) = 0;
    virtual float calculateTotalSum() const = 0;
    virtual vector<Item_abstract*> getItems() const = 0;
};

class ItemDetails : public ItemDetails_Abstract{
private:
	vector<Item_abstract*> items;
	float totalAmount;
public:
	void addItem(Item_abstract* item) override {items.push_back(item);}
	void removeItem(const string& itemId) override {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if ((*it)->getId() == itemId) {
                items.erase(it);
                break;
            }
        }
    }
	float calculateTotalSum() const override {
        float total = 0;
        for(auto it : items){
            total += it->getprice();
        }
        return total;
    }
    vector<Item_abstract*> getItems() const override {
        return items;
    }
};

class GenerateInvoice_Abstract{
public:
    virtual void printInvoice(const vector<Item_abstract*>& items) const = 0;
};

class GenerateInvoice : public GenerateInvoice_Abstract{
public:
	void printInvoice(const vector<Item_abstract*>& items) const override {
        float total = 0;
        for(auto it : items){
            total += it->getprice();
        }
        cout << "Your bill is : " << total << endl;
    }
};

int main() {
    // Example usage
    CustomerPersonalDetails customer;
    customer.setName("John Doe", 123);

    ItemDetails itemDetails;
    itemDetails.addItem(new Item("Item1", "1", 10.5));
    itemDetails.addItem(new ExpensiveItem("Item2", "2", 20.75));

    GenerateInvoice invoiceGenerator;
    invoiceGenerator.printInvoice(itemDetails.getItems());

    return 0;
}
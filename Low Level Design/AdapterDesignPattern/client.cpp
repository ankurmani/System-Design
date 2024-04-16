#include<iostream>
using namespace std;

class XMLData{
    private:
        string XMLdata;
    public:
        XMLData(string pXMLdata){
            XMLdata = pXMLdata;
        }
        string getXMLdata(){
            return XMLdata; 
        }     
};

class Data_analyticTool{
    private:
        string data;
    public:
        Data_analyticTool(){}
        virtual void processdata(){
            cout << "Processing data" << endl;
        }
};

class Adapter : public Data_analyticTool{
    private:
        string xmldata;
    public:
        Adapter(XMLData* xmld){
            xmldata = xmld->getXMLdata();
        }
        void processdata() override{
            cout << "Processing data " << xmldata << " in xml format" << endl;
        }
};

int main(){
    XMLData* XML_data = new XMLData("Sample XML data");
    Data_analyticTool* datanalysis = new Adapter(XML_data);
    datanalysis->processdata();

    return 0;
}

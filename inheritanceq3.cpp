#include<iostream>
using namespace std;
class Bank{
    protected:
string bankname;
Bank(string ba){
    bankname=ba;
}
void display(){
    cout<<"dafault"<<bankname<<endl;
}
};
class Customer:public Bank{
    string customername;
    int balance;
    public:
    Customer(string ba,string c,int b): Bank(ba){
        customername=c;
        balance=b;
    }
    void display(){
        cout<<"customer name"<<customername<<endl;
        cout<<"balance"<<balance<<endl;
    }
};
int main(){
    Bank k("axis");
    k.display();
    cout<<endl;
    Customer s("HDFC","kirti garg",5000);
    s.display();
    return 0;
}

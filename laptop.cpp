#include<iostream>
using namespace std;
class Laptop{
    string brand;
    int ram;
    int price;
    public:
    Laptop();
    void setDetails(string b,int r,int p);
    void display();
};
Laptop::Laptop(){
    brand ="unknown";
    ram =0;
    price =0;
}
void Laptop::setDetails(string b,int r,int p){
    brand = b;
    ram =r;
    price =p;
}
void Laptop::display(){
    cout<<"brand"<<brand<<endl;
    cout<<"ram"<<ram<<endl;
    cout<<"price"<<price<<endl;
}
int main(){
    Laptop l1;
    l1.setDetails("HP",256,100000);
    l1.display();
}
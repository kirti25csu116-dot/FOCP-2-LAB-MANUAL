#include<iostream>
using namespace std;

class Product{
string Productname;
float Price;
int Quantity;

public:
Product(string name,float p,int q){
    Productname=name;
    Price=p;
    Quantity=q;
}

float calculatetotalcost(){
    return Price*Quantity;
}

void displaydetails(){
    cout<<"\nOnline Shopping Bill\n";
    cout<<"Product Name: "<<Productname<<endl;
    cout<<"Price: "<<Price<<endl;
    cout<<"Quantity: "<<Quantity<<endl;
    cout<<"Total Cost: "<<calculatetotalcost()<<endl;
}

// Destructor
~Product(){
    cout<<"Product "<<Productname<<" removed from memory"<<endl;
}

};

int main(){

Product p1("Pizza",500,4);
Product p2("Burger",200,3);

p1.displaydetails();
p2.displaydetails();

return 0;
}


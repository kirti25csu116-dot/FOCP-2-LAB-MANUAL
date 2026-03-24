
#include<iostream>
using namespace std;

class Mobile{
    string brand;
    float price;
    int storageCapacity;

public:

    // Constructor 1 (only brand)
    Mobile(string b){
        brand = b;
        price = 0;
        storageCapacity = 0;
    }

    // Constructor 2 (brand + price)
    Mobile(string b, float p){
        brand = b;
        price = p;
        storageCapacity = 0;
    }

    // Constructor 3 (brand + price + storage)
    Mobile(string b, float p, int s){
        brand = b;
        price = p;
        storageCapacity = s;
    }

    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Storage: "<<storageCapacity<<" GB"<<endl;
        cout<<"-------------------"<<endl;
    }
};

int main(){

    Mobile m1("OnePlus");
    Mobile m2("Samsung",50000);
    Mobile m3("Apple",90000,256);

    m1.display();
    m2.display();
    m3.display();

    return 0;
}


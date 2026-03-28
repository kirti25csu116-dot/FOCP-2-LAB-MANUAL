#include<iostream>
using namespace std;
class Device{
    public:
    void poweron(){
        cout<<"device poweron"<<endl;
    }
};
class Computer:public Device{
    public:
    void process(){
        cout<<"computer is in process"<<endl;
    }
};
class Laptop:public Computer{
    public:
    void carry(){
        cout<<"carry your laptop"<<endl;
    }
};
int main(){
    Laptop l;
    l.poweron();
    l.process();
    l.carry();
    return 0;
}
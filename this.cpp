#include<iostream>
using namespace std;
class A{
    int a1;
    int a2;
    int a3;
    public:
    A(){
    a1=0;
    a2=0;
    a3=0;
    }
    A(int a1,int a2,int v3){
    this->a1=a1;
    (*this).a2=a2;
    a3=v3;
    }
    void display(){
        cout<<"a1="<<a1<<endl<<"a2="<<a2<<endl<<"v3"<<a3<<endl;
    }
};
int main(){
    A obj1,obj2(20,30,60);
    obj1.display();
    obj2.display();
}
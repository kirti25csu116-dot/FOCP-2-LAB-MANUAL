#include<iostream>
using namespace std;
class Animal{
public:
void eat(){
    cout<<"animal is eating"<<endl;
}
};
class Dog:public Animal{
public:
void bark(){
    cout<<"dog is barking"<<endl;
}
};
class Puppy:public Dog{
public:
void weep(){
    cout<<"puppy is weeping"<<endl;
}
};
int main(){
Puppy p;
p.eat();
p.bark();
p.weep();
return 0;
}
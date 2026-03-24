#include<iostream>
using namespace std;
class Person {
    string name;int age;
    public:
    Person(){
        cout<<"\n person default constructor";name="default";age=18;
    }
    Person(string nm,int ag)
    {
        cout<<"\n person parametrized contructor";
        name=nm;age=ag;
    }
    void display(){
        cout<<"\n name ="<<name<<"\n age = "<<age;
    }
};
class Student:public Person{
    string rollno;
    public:
    Student(){
        cout<<"\n student default constructor";rollno="25csu116";
    }
    Student(string nm,int ag,string rno):Person(nm,ag)
    {
        cout<<"\n student parametrized";
        rollno=rno;
    }
    void display_student(){
        display();
        cout<<"\n Rollno ="<<rollno;
    }
};
int main(){
    Student p1,p2("kirti garg",23,"25csu116");
    p1.display();
    p1.display_student();
    p2.display_student();
    return 0;
}
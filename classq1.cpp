#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int marks1, marks2, marks3;

    int calculateTotal()//getter
     {
        return (marks1 + marks2 + marks3);
    }
    void inputDetails()//setter
    {
        cout<<"enter rollNo>>name>>marks1>>marks2>>marks3";
        cin>>rollNo>>name>>marks1>>marks2>>marks3;
    }

    void displayDetails() // getter
    {
        cout << "\nStudent Details\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
        cout << "Marks 3: " << marks3 << endl;
        cout << "Total Marks: " << calculateTotal() << endl;
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.displayDetails();

    return 0;
}
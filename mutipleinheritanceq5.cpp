#include<iostream>
using namespace std;

class Employee {
protected:
    string name;

public:
    void setname(string n) {   
        name = n;
    }
};

class Department {
protected:
    string departmentname;

public:
    void setdepartmentname(string dn) {   
        departmentname = dn;
    }
};

class Manager : public Employee, public Department {
public:
    void display() {
        cout << "Employee name: " << name << endl;
        cout << "Department name: " << departmentname << endl;
    }
};

int main() {
    Manager m;

    m.setname("shailender");
    m.setdepartmentname("btech cse");

    m.display();

    return 0;
}
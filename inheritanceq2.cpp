#include<iostream>
using namespace std;
class Account{
protected:
int accountnumber;
double balance;
public:
Account(int acc,double b){
    accountnumber=acc;
    balance=b;
}
void display(){
    cout<<"account number"<<accountnumber<<endl;
    cout<<"balance"<<balance<<endl;
}
};
class SavingAccount:public Account{
double interestrate;
public:
SavingAccount(int acc,double b,double rate)
    : Account(acc,b){
    interestrate=rate;
}
void calculateInterest(){
    double interest =(balance*interestrate) /100;
    cout<<"interest"<<interestrate<<endl;
}
};int main(){
    Account a(101,500);
    a.display();
    SavingAccount s(101,500,300);
    s.display();
    s.calculateInterest();
    return 0;
}
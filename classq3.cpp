#include<iostream>
using namespace std ;
class BankAccount{
    string accountHolderName;
	int accountNumber;
	double balance;
    public:
    void inputDetails();
    void displayDetails();
     void deposit(double amount);
     void withdraw(double amount); 
        
};
void BankAccount::inputDetails(){
    cout<<"Enter Account Number: ";
        cin >> accountNumber;
        cout<<"enter holdername";
        cin.ignore();
        getline(cin,accountHolderName);
        cout<<"enter initial  balance";
        cin>>balance;}
 void BankAccount::deposit(double amount){
    balance+=amount;
    cout<<"/n amount deposited /n balance= "<<balance;
 }     
 void BankAccount::withdraw(double amount){
    if(amount>balance)
    cout<<"\n denied withdraw";
    else{
        balance-=amount;
        cout<<"withdraw succesfully";
    }
 }
 void BankAccount ::displayDetails(){
        cout  << "\nAccount Details\n";
        cout << "Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

int main(){
    BankAccount b;
    double amount;
    b.inputDetails();
    b.displayDetails();
    char choice;
    cout<<"\n W for withdrawl D deposit";
    cin>>choice;
    if(choice=='D'){
cout<<"enter amount to deposit";
cin>>amount;
    b.deposit(amount);}
else if (choice == 'W') {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        b.withdraw(amount);
    }
    else {
        cout << "\nInvalid choice";
    }

    b.displayDetails();
    return 0;
}


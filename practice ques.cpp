#include<iostream>5
using namespace std;
int main(){
    int number,reversedNumber=0, remainder,originalNuber=0;
    cout<<"enter a number:";
    cin>>number;
    int originalNumber= number;
    while(number>0){
    remainder=number%10;
    reversedNumber=reversedNumber*10+remainder;
    number/=10;
    }
    if(number==reversedNumber){
    cout<<"its a palindrome";
    }
    cout << "The palidrome of "<< originalNumber <<"is "<< reversedNumber <<endl;
    return 0;
}
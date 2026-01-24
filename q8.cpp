#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    if(n%3==0)
    cout<<"buzz"<<endl;
    else if (n%5==0)
    cout<<"fuzz"<<endl;
    else(n%3==0 || n%5==0);
    cout<<"both tags"<<endl;
    return 0;  
}
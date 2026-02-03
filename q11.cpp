#include<iostream>
using namespace std;
int main(){
    int quantity;
    float price , totalamount , finalamount , discount=0;
    cout<<"enter quantity";
    cin>>quantity;
    cout<<"enter unitprice";
    cin>>price;

    totalamount = quantity*price;
    if(totalamount>1000)
    discount = totalamount*0.20;
    finalamount = totalamount - discount;
    cout<<"\n totalamount"<<totalamount;
    cout<<"\n discount"<<discount;
    cout<<"\n finalamount"<<finalamount;
    return 0;
}
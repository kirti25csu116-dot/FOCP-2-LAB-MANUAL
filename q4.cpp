#include<iostream>
using namespace std;
int main(){
    int itemNo , quantity;
    float unitprice , totalamount , finalamount , discount;
    cout<<"enter itemNo";
    cin>>itemNo;
    cout<<"enter quantity";
    cin>>quantity;
    cout<<"enter unitprice";
    cin>>unitprice;

    totalamount = quantity*unitprice;
    discount = totalamount*0.20;
    finalamount = totalamount - discount;
    cout<<"\n itemNo"<<itemNo;
    cout<<"\n totalamount"<<totalamount;
    cout<<"\n discount"<<discount;
    cout<<"\n finalamount"<<finalamount;
    return 0;
}
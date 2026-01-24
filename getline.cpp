#include<iostream>
using namespace std;
int main(){
    int a = 10;
    float f = 14.67;
    string name = " FOCP-2";
    cout<<"enter the vale of a,f & name";
    cout<<a;
    cin>>f;
    //cin.ignore();
    //cin>>name;
    getline(cin,name);
     cout<<"\n a= "<<a<<"\n f= "<<f<<"\n name= "<<name;
    return 0;
} 
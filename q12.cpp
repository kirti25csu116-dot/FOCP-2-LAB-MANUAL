#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"enter the value of c";
    cin>>c;
    if(a==b && b==c){
    cout<<"its a equilateral triangle"<<endl;
    }
    else if(a==b || b==c || c==a){
    cout<<"its a isoceles triangle"<<endl;
    }
    else {
    cout<<"its a scalene triangle"<<endl;
    }
    return 0;
}
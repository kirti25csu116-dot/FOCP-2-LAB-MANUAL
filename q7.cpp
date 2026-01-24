#include<iostream>
using namespace std;
int main(){
    int p1,p2,p3;
    cout<<"enter the score of player 1";
    cin>>p1;
    cout<<"enter the score of player 2";
    cin>>p2;
    cout<<"enter the score of player 3";
    cin>>p3;
    if(p1>p2 && p1>p3)
    cout<<" player 1 is winner"<<endl;
    else if (p2>p1 && p2>p3)
    cout<<" player 2 is winner"<<endl;
    else if (p3>p1 && p3>p2)
    cout<<" player 3 is winner"<<endl;
    else 
    cout<<"its a tie match!"<<endl;
    return 0;    

}
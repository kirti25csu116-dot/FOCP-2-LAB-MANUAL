#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the value of rows =";
    cin>>n;
    cout<<"enter the value of coloum =";
    cin>>m;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
    cout<<j<<" ";
    }
    cout<<endl;
}
    return 0;
}
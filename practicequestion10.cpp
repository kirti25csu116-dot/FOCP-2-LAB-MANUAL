#include<iostream>
using namespace std;
int result(int,int);
int result(int,int,int);
int result(int,int,int,int);
int result(int,int,int,int,int);
int main(){
    cout<<"\n result of 2 subjects"<<result(45,58);
    cout<<"\n result of 3 subjects"<<result(57,68,95);
    cout<<"\n result of 4 subjects"<<result(78,49,65,77);
    cout<<"\n result of 5 subjects"<<result(47,69,84,56,75);
    return 0;
} 
int result(int n1,int n2)
{
    cout<<"\n int method";
    return n1+n2;
}
int result(int n1,int n2,int n3)
{
    cout<<"\n int method";
    return n1+n2+n3;
}
int result(int n1,int n2,int n3,int n4)
{
    cout<<"\n int method";
    return n1+n2+n3+n4;
}
int result(int n1,int n2,int n3,int n4,int n5)
{
    cout<<"\n int method";
    return n1+n2+n3+n4+n5;
}
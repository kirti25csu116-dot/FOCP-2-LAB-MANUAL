#include<iostream>
using namespace std;
class Rectangle{
int length;
int width;
static int count;
public:
Rectangle(){
    length=0;width=0;count++;
}
Rectangle(int l,int w){
    length=l;
    width=w;
    count++;
}
void display(){
    cout<<"\n length= "<<length;
    cout<<"\n width = "<<width;
    cout<<"\n number of objects created :"<<created;
}
};
int Rectangle::count;
int main(){
    Rectangle r1;
    r1.display();
    Rectangle r2(23,45);
}
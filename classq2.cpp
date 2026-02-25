#include<iostream>
using namespace std;
class rectangle {
    public:
    float length;
    float width;
    float area;
    float perimeter;
    void inputDimensions(){
    cout<<"enter length of rectangle"<<endl;
    cin>>length;
    cout<<"enter width of rectangle"<<endl;
    cin>>width;
}
    float calculateArea(){
    return length*width;
    }
    float calculatePerimeter(){
        return 2*(length+width);
    }
    void displayResult(){
        cout<<"length"<<length<<endl;
        cout<<"width"<<width<<endl;
        cout<<"area"<<calculateArea()<<endl;
        cout<<"perimeter"<<calculatePerimeter()<<endl;

    }
};
int main(){
rectangle r;
r.inputDimensions();
r.displayResult();
return 0;
}
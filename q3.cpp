#include<iostream>
using namespace std;
int main(){
    float celcius,fahrenhiet;
    int choice;
    cout<<"1.celcius to fahrenhiet"<<endl;
    cout<<"2.fahrenhiet to celcius"<<endl;
    cout<<"enter your choice";
    cin>>choice;
     
    switch(choice){
        case 1:
        cout<<"enter the value of celcius"<<endl;
        cin>>celcius;
        fahrenhiet = (celcius* 9/5) +32;
        cout<<"the value of fahrenhiet = "<<fahrenhiet<<endl ;
        break;
        case 2:
        cout<<"enter the value of fahrenhiet"<<endl;
        cin>>fahrenhiet;
        celcius = (fahrenhiet -32) *5/9;
        cout<<"the value of celcius = "<<celcius<<endl;
        break;
        default:
        cout<<"invalid choice"<<endl;
    }
        return 0;
    }
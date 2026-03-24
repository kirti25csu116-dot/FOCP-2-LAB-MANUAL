#include<iostream>
using namespace std;
class Book{
string title;
string author;
double price;
public:
Book(); // default construtor 
Book(string author); // parameterized
Book(string author,double price); //parameterized
	void inputDetails();
	void displayDetails();

};
Book::Book(){
    title="Dr.";
    author="rd sharma";
    price=500;
}
Book::Book(string author){
    title=title;
    author=author;
    price=0;
}
Book::Book(string author,double price){
    author=author;
    price=price;
}
void Book::inputDetails(){
    cout<<"enter the title: ";
    cin>>title;
    cout<<"enter the author name: ";
    cin>>author ;
    cout<<"enter the price: ";
    cin>>price;

}
void Book::displayDetails(){
    cout<<"\n Book details\n";
    cout<<"title:"<<"Dr."<<endl;
    cout<<"author"<<"R.D. Sharma"<<endl;
    cout<<"price"<<"650"<<endl;

}
int main(){
    Book b("Dr. R.D sharma",650);
    b.inputDetails();
    b.displayDetails();
    return 0;
}


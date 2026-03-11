#include<iostream>
using namespace std;
class Course{
string Coursename;
string Instructorname;
 int Courseduration;
 public:
 Course(string coursename,string instructorname,int courseduration){
 Coursename=coursename;
 Instructorname=instructorname;
 Courseduration=courseduration;
 }
 void displaydetails(){
    cout<<"\n courses details \n";
    cout<<"course name"<<Coursename<<endl;
    cout<<"instructorname"<<Instructorname<<endl;
    cout<<"course duration"<<Courseduration<<endl;
 }
 // Destructor
~Course(){
    cout<<"course "<<Coursename<<" removed from memory"<<endl;
}

};
int main(){
    Course C1("Jee","shailender sir",7);
    Course C2("neet","shashi sir",9);
    C1.displaydetails();
    C2.displaydetails();
    return 0;
}
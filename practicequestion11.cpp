#include<iostream>
using namespace std;
void welcome(string="agent",string="");
int main()
{
    welcome();
    welcome("kirti");
    welcome("kirti","garg");
    return 0;
}
void welcome(string fname,string lname)
{
    cout<<"\n welcome"<<fname<<lname;
}
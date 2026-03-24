#include<iostream>
using namespace std;
class Vehicle {
    int vehiclenumber;
    string ownername;
    string vehicletype;
    int registrationfee;
    public:
    Vehicle();
    void inputdetails(int v,string own);
    void inputdetails(int v,string own,string veh,int r);
    void displaydetails();
};
 Vehicle:: Vehicle(){
    vehiclenumber=0;
    ownername ="unknown";
    vehicletype ="general";
    registrationfee =0;
}
void Vehicle::inputdetails(int v,string own){
vehiclenumber=v;
ownername=own;
}
 void Vehicle::inputdetails(int v,string own,string veh,int r){
    vehiclenumber=v;
    ownername=own;
    vehicletype=veh;
    registrationfee=r;
 }
 void Vehicle::displaydetails(){
    cout<<"\n trasport department\n"<<endl;
    cout<<"Vehicle number"<<vehiclenumber<<endl;
    cout<<"Owner name"<<ownername<<endl;
    cout<<"Vehicle type"<<vehicletype<<endl;
    cout<<"Registration fee"<<registrationfee<<endl;
 }
 int main(){
    Vehicle v;
   v.inputdetails(9302,"Vikas Gupta","Car",5000);
   v.displaydetails();
   return 0;
 }

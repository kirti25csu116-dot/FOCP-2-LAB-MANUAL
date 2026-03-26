#include<iostream>
using namespace std;
class Academic{
protected:
int marks;
public:
void setmarks(int m){
    marks=m;
}
};
class Sports{
    protected:
int scores;
public:
void setscores(int s){
   scores=s;
}
};
class Result:public Academic,public Sports{
public:
void display(){
    cout<<"academic marks "<<marks<<endl;
    cout<<"sports scores"<<scores<<endl;
}
};int main(){
    Result r;
    r.setmarks(85);
    r.setscores(90);
    r.display();
    return 0;
}
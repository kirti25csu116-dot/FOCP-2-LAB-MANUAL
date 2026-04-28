#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("C:/Users/MEHUL/OneDrive/Desktop/FOCP-2 Lab manual/jyoti.txt");

    if(!fout){
        cout << "Error opening file!";
        return 1;
    }

    fout << "\n jyoti is a kindhearted girl \n 19 yr old\n";
    fout << "highly ambitious and hardworking ";

    fout.close();
    cout << "Data written successfully";

    return 0;
}

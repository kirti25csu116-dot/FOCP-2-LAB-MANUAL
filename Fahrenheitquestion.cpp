#include<iostream>
using namespace std;
class Temperature{
float celsius;
float Fahrenheit;
public:
Temperature();
	void inputTemperature();
	float convertToFahrenheit();
	void displayResult();
};
Temperature::Temperature(){
 celsius=0;
 Fahrenheit=0;
}
void Temperature::inputTemperature(){
    cout<<"enter Temperature in celsius";
    cin>>celsius;
}
float Temperature::convertToFahrenheit(){
 Fahrenheit = (celsius * 9/5) + 32;
        return Fahrenheit;
}
void Temperature::displayResult(){
    cout<<"Temperature in Fahrenheit"<<Fahrenheit<<endl;
}
int main(){
      Temperature t;   // object created

    t.inputTemperature();
    t.convertToFahrenheit();
    t.displayResult();

    return 0;
}






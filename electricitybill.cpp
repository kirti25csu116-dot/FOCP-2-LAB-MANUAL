#include<iostream>
using namespace std;

class ElectricityBill
{
public:

    // 1. If only units are given
    void calculateBill(int units)
    {
        float bill;
        bill = units * 5;
        cout << "Bill (Default rate ₹5/unit) = ₹" << bill << endl;
    }

    // 2. If units and rate are given
    void calculateBill(int units, float rate)
    {
        float bill;
        bill = units * rate;
        cout << "Bill (Custom rate) = ₹" << bill << endl;
    }

    // 3. If units, rate and fixed charge are given
    void calculateBill(int units, float rate, float fixedCharge)
    {
        float bill;
        bill = (units * rate) + fixedCharge;
        cout << "Bill (Rate + Fixed charge) = ₹" << bill << endl;
    }
};

int main()
{
    ElectricityBill obj;

    // Calling overloaded functions
    obj.calculateBill(100);            // Only units
    obj.calculateBill(100, 6.5);       // Units + rate
    obj.calculateBill(100, 6.5, 50);   // Units + rate + fixed charge

    return 0;
}
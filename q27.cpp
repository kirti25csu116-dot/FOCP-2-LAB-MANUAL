#include <iostream>
using namespace std;

int main() {
    float salary[10];
    float total = 0, average;

    // Input salaries
    cout << "Enter salaries of 10 employees:\n";
    for(int i = 0; i < 10; i++) {
        cin >> salary[i];
        total += salary[i]; // add to total
    }

    // Calculate average
    average = total / 10;

    // Display results
    cout << "Total Salary = " << total << endl;
    cout << "Average Salary = " << average << endl;

    return 0;
}
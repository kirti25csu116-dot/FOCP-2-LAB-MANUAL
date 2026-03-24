#include <iostream>
using namespace std;

int main() {
    float marks[5];
    float total = 0, percentage;

    // Input marks
    cout << "Enter marks of 5 subjects:\n";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    // Calculate percentage
    percentage = total / 5;

    // Display result
    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
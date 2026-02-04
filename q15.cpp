#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of sales entries: ";
    cin >> n;

    int sales, maxSales;

    cout << "Enter sales figure 1: ";
    cin >> maxSales;   // assume first value is the maximum

    for (int i = 2; i <= n; i++) {
        cout << "Enter sales figure " << i << ": ";
        cin >> sales;

        if (sales > maxSales) {
            maxSales = sales;
        }
    }

    cout << "Maximum sales figure is: " << maxSales << endl;

    return 0;
}

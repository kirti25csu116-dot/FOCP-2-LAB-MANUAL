#include <iostream>
using namespace std;

int main() {
    int n = 5; // height of upper half

    // Upper half
    for(int i = 1; i <= n; i++) {
        // spaces
        for(int j = i; j < n; j++) {
            cout << " ";
        }

        // stars
        for(int j = 1; j <= (2*i - 1); j++) {
            if(j == 1 || j == (2*i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower half
    for(int i = n-1; i >= 1; i--) {
        // spaces
        for(int j = i; j < n; j++) {
            cout << " ";
        }

        // stars
        for(int j = 1; j <= (2*i - 1); j++) {
            if(j == 1 || j == (2*i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
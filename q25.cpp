#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter starting  limits: ";
    cin >> start;
    cout<<"enter the ending limit: ";
    cin>>end;

    for(int i = start; i <= end; i++) {
        if(i <= 1) continue; // skip non-prime numbers

        bool isPrime = true;

        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << i << " ";
        }
    }

    return 0;
}
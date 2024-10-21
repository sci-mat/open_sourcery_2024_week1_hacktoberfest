#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the diamond (height of full part)

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left half-diamond
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Right full-diamond part
        for (int j = 1; j <= 2*(n-i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2*i-1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n-1; i >= 1; i--) {
        // Left half-diamond
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Right full-diamond part
        for (int j = 1; j <= 2*(n-i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2*i-1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

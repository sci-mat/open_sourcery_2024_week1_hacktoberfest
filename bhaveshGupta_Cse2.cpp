#include <iostream>

using namespace std;

void printButterflyPattern(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (size - i) - 1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = size - 1; i >= 1; i--) {
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (size - i) - 1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> size;

    printButterflyPattern(size);

    return 0;
}
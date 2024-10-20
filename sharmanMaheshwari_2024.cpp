/*

Week 1 Task: Write a C++ Code to print the following butterfly pattern 

*       *
**     **
***   ***
**** ****
*********
**** ****
***   ***
**     **
*       *
** updated by Ananya Vijayavergiya
Task Deadline: 21st October 2024

Cheatsheet: 

1. git add .

2. git commit -m "your_message"

3. git push origin main

P.S.: your filename in the pull request should only be made in the form of yourName_batch

*/

// Write Code Here

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


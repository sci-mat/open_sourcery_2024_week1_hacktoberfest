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

Task Deadline: 21st October 2024

Cheatsheet: 

1. git add .

2. git commit -m "your_message"

3. git push origin main


P.S.: your filename in the pull request should only be made in the form of yourName_batch

*/

// Write Code Here
#include <iostream>

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 10; j >= 1; j--) {
            if (j > i && j < (11 - i)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    for (int i = 6; i < 10; i++) {
        for (int j = 10; j > 0; j--) {
            if (j > i || j < (11 - i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

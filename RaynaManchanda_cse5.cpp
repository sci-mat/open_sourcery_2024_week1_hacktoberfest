#include <iostream>

using namespace std;

// Function to print the butterfly pattern
void printButterfly(int n) {
    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*"; // Print i stars for the current row
        }
        
        // Print spaces in the middle
        for (int j = 1; j <= (2 * n - 2 * i); j++) {
            cout << " "; // Print spaces to create the gap between the star patterns
        }
        
        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*"; // Print i stars for the current row on the right side
        }
        
        // Move to the next line after each row
        cout << endl;
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; i--) {
        // Print left stars
        for (int j = 1; j <= i; j++) {
            cout << "*"; // Print i stars for the current row
        }
        
        // Print spaces in the middle
        for (int j = 1; j <= (2 * n - 2 * i); j++) {
            cout << " "; // Print spaces to create the gap between the star patterns
        }
        
        // Print right stars
        for (int j = 1; j <= i; j++) {
            cout << "*"; // Print i stars for the current row on the right side
        }
        
        // Move to the next line after each row
        cout << endl;
    }
}

// Main function to execute the program
int main() {
    int n = 5; // Number of lines for half of the butterfly
    printButterfly(n); // Call the function to print the butterfly pattern
    return 0; // Indicate that the program ended successfully
}

/**
 * @file RaghavYadav_cse5_2024.cpp
 * @author Raghav Yadav
 * @brief Prints a butterfly pattern
 * @details Prints a pattern of * and spaces in the shape of a butterfly.
 * The size of the pattern is determined by the variable n.
 * The outer loop runs from 1 to n and the inner loop runs from 1 to i.
 * The first inner loop prints * and the second inner loop prints spaces.
 * The third inner loop prints * again. The pattern is then printed in reverse
 * order using a similar loop structure.
 * @date 2024-10-21
 */

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // Print the upper half of the pattern
    for (int i = 1; i <= n; i++)
    {
        // Print the left side of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print the center of the pattern
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Print the right side of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
    // Print the lower half of the pattern
    for (int i = n; i >= 1; i--)
    {
        // Print the left side of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print the center of the pattern
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // Print the right side of the pattern
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}

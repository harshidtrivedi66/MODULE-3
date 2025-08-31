//Nested Control Structures

//Write a program that prints a right-angled triangle using stars (*) with a nested loop.

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) 
	{
        // Inner loop for stars
        for (int j = 1; j <= i; j++) 
		{
            cout << "* ";
        }
        cout << endl; // move to next line after each row
    }

    return 0;
}


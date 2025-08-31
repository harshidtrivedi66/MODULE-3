//Factorial Calculation Using Recursion

//Write a C++ program that calculates the factorial of a number using recursion.

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long factorial(int n) {
    if (n == 0 || n == 1)   // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
    }

    return 0;
}


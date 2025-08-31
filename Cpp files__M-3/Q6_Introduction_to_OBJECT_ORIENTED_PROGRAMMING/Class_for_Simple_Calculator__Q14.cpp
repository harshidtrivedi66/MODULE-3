//Introduction to Object-Oriented Programming

//Class for a Simple Calculator

//Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions.

#include <iostream>
using namespace std;

class Calculator {
public:
    // Function for addition
    int add(int a, int b) {
        return a + b;
    }

    // Function for subtraction
    int subtract(int a, int b) {
        return a - b;
    }

    // Function for multiplication
    int multiply(int a, int b) {
        return a * b;
    }

    // Function for division
    float divide(int a, int b) {
        if (b != 0)
            return (float)a / b;
        else {
            cout << "Error! Division by zero not allowed." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;   // create object of Calculator class
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nResults using Calculator class:\n";
    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}


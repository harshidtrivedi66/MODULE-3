//Simple Calculator Using Functions

//Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). The main function should call these based on user input.

#include <iostream>
using namespace std;

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

int main() {
    int num1, num2, choice;

    cout << "Simple Calculator using Functions" << endl;
    cout << "---------------------------------" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

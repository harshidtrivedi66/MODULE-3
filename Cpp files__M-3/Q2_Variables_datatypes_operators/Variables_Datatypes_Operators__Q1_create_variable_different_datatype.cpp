//2. Variables, Data Types, and Operators 

//LAB EXERCISES: Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them.

#include <iostream>

using namespace std;

int main() {
	
    // constant (value will not change)
    const int year = 2025;


    // variables
    int age = 20;         // integer
    float height = 5.8;   // decimal value
    char grade = 'A';     // single character

    // operations
    int Age = age + 1;        // increase age by 1
    float doubleHeight = height * 2; // multiply height by 2

    cout << "Current Year: " << year << endl;
    cout << "Age: " << age << ", Next Year Age: " << Age << endl;
    cout << "Height: " << height << ", Double Height: " << doubleHeight << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

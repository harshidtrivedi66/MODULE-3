//2. Type Conversion

//Write a C++ program that performs both implicit and explicit type conversions and prints the results.

#include <iostream>
using namespace std;

int main() {
 
    // Implicit Conversion (automatic)
    int num = 5;          // integer
    double d = num;       // int automatically converted to double

    cout << "Implicit Conversion:" << endl;
    cout << "Integer num = " << num << endl;
    cout << "Converted to double d = " << d << endl;

    // Explicit Conversion (manual)
    double pi = 3.14;     
    int piInt = (int)pi;  // explicitly convert double to int

    cout << "\nExplicit Conversion:" << endl;
    cout << "Original double pi = " << pi << endl;
    cout << "After converting to int piInt = " << piInt << endl;

    return 0;
}

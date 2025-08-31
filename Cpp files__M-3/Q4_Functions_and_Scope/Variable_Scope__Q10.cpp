//Variable Scope

//Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope.

#include <iostream>
using namespace std;
int globalVar = 100;

// Function to demonstrate local variable
void showLocal() {
    int localVar = 10;  // local variable
    cout << "Inside showLocal() -> Local variable: " << localVar << endl;
    cout << "Inside showLocal() -> Global variable: " << globalVar << endl;
}

// Function to modify global variable
void modifyGlobal() 

{
    globalVar = globalVar + 50;
    cout << "Inside modifyGlobal() -> Global variable modified: " << globalVar << endl;

}

	int main() {
    cout << "Initially -> Global variable: " << globalVar << endl;

    showLocal();       
    modifyGlobal();    

    // Local variable in main

    int localVar = 5;
    cout << "Inside main() -> Local variable: " << localVar << endl;
    cout << "Inside main() -> Global variable: " << globalVar << endl;

    return 0;
}

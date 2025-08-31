//Procedural Programming (POP) Approach

#include <iostream>
using namespace std;

// Function to calculate area
int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    int area = calculateArea(length, width);
    cout << "Area of rectangle (POP): " << area << endl;

    return 0;
}


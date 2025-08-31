//OOP Approach:-

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    // Function to set dimensions
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;  // Object created

    int length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);
    cout << "Area of rectangle (OOP): " << rect.calculateArea() << endl;

    return 0;
}

//Array Sum and Average

//Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];   // array declaration
    int sum = 0;

    cout << "Enter " << n << " integers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];   // add elements while reading
    }

    float average = (float)sum / n;

    cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

    return 0;
}

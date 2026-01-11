#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the numbers
    double num1, num2;

    // Ask user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate sum
    double sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}

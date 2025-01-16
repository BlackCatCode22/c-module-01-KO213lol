// Description: This program asks the user to enter an integer, then displays the entered integer and the double of the entered integer.
#include <iostream>

using namespace std;

int main() {
    int num;

    // Get the number from the user
    cout << "Enter an integer: ";
    cin >> num;

    // Display the number twice
    int doubleNum = num * 2;

    // Output the double number
    cout << "Double value: " << doubleNum << endl;
    return 0;
}
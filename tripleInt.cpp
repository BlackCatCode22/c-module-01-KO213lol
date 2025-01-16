// This program is to simply triple the int a user enters.
#include <iostream>

using namespace std;

int main() {
    int num;

    while (true) {
        // Get the number from the user
        cout << "Enter an integer (0 to exit): ";   // Prompt the user to enter an integer
        cin >> num;

        // Check if the user wants to exit
        if (num == 0) {
            break;
        }

        // Display the number tripled
        int tripleNum = num * 3;   // Multiply the entered integer by 3

        // Output the tripled number
        cout << "Triple value: " << tripleNum << endl;   // Output the tripled number
    }

    return 0;
}
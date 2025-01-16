// This program is to get two intergers from the user and then add them up. So basicly a math program that only adds two numberes.

#include <iostream>
using namespace std;

int main() 
{ 
    int integer1, integer2;
  
    // Take multiple input using cin 
    cout << "Enter the first integer: ";
    cin >> integer1;
    cout << "Enter the second integer: ";
    cin >> integer2;
  
    // Print output wich would be our sum.
    cout << "The sum of the two numbers is: " << integer1 + integer2 << endl;
  
    return 0;
}
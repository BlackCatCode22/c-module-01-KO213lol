// in this program we will be making a simple greeting program that will ask the user for their name and then greet them.

#include <iostream>
using namespace std;

int main()
{
    // here we are setting up a string variable called name
    string name; 

    // here we are asking the user for their fist name
    cout << "What is your first name?" << endl;


    // here we are taking the input from the user and storing it in the name variable
    cin >> name; 

    // here we are greeting the user with their name
    cout << "Hello " << name << "!" << endl;
    
    // here we are typing return 0 to end the program
    return 0;
}
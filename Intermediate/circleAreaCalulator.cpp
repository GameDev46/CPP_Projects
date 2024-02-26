/*
    Circle area calculator
    26/02/24
    by GameDev46
*/

// Include the input/output standard library for C++
#include <iostream>

// Switch to the standard namespace (an alernative to doing this would be to use std:: in front of some inbuilt function names, for example std::cout rather than just cout)
using namespace std;

// Setup main function that is called when the program is run
int main() {

    // Declare the constant PI to be 3.14159265
    const double PI = 3.14159265;

    // Declare area and radius to 0.0
    double area = 0.0, radius = 0.0;

    cout << "Enter the radius of the circle: ";
    // Wait for the user to input the radius of the circle which will be stored in the radius variable
    cin >> radius;

    // Calculate and output area using the formula Area = PI * radius * radius
    area = PI * radius * radius;
    
    // Output the area to the console
    cout << "The area of the circle is " << area << endl;

    // End the program
    return 0;
}
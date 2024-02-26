/*
    Demonstration fo how you can print variables to the console in C++
    26/02/24
    by GameDev46
*/

// Load the standard input/output C++ library
#include <iostream>

// Switch to the standard namespace (an alernative to doing this would be to use std:: in front of some inbuilt function names, for example std::cout rather than just cout)
using namespace std;

// Setup main function that is called when the program is run
int main() {

    // Print an integer to the console
    int myInteger = 5;
    cout << "The variable myInteger has value " << myInteger << endl;

    // Print a float to the console
    float myFloat = 15.0f;
    cout << "The variable myFloat has value " << myFloat << endl;

    // Print a double (float but with 15 to 16 significant figures) to the console
    double myDouble = 23.0;
    cout << "The variable myDouble has value " << myDouble << endl;

    // Print a double (float but with roughly 15 to 19 significant figures) to the console
    long double myLongDouble = 103.0;
    cout << "The variable myLongDouble has value " << myLongDouble << endl;

    // Print a char (a single letter) to the console
    char myChar = 'H';
    cout << "The variable myChar has value " << myChar << endl;

    // Print a string to the console
    string myString = "Hello World!";
    cout << "The variable myString has value " << myString << endl;
    
    // End the program
    return 0;
}
/*
    Prints the users inputted message to the console
    26/02/24
    by GameDev46
*/

// Load the standard input/output C++ library
#include <iostream>

// Switch to the standard namespace (an alernative to doing this would be to use std:: in front of some inbuilt function names, for example std::cout rather than just cout)
using namespace std;

// Setup main function that is called when the program is run
int main() {
    
    // Setup the float in which the users input will be stored
    float userInput = 0.0f;

    cout << "Enter number: ";
    // Wait for the user to input a number that will be stored in the userInput variable (Note the direction of the  >> braces!)
    cin >> userInput;

    userInput *= 2.0f;

    // Print the new value of userInput to the console
    cout << "Double the userInput is " << userInput << endl;
    
    // End the program
    return 0;
}
/*
    Checks whether the CPU stack fills up or down
    22/01/24
    by GameDev46
*/

// Load the standard input/output C++ library
#include <iostream>

// Switch to the standard namespace (an alernative to doing this would be to use std:: in front of some inbuilt function names, for example std::cout rather than just cout)
using namespace std;

// Setup the checkCPUStackFill function that checks whether your computer's CPU stack fills upwards or downwards using recursion
bool checkCPUStackFill(int *previousAddress) {

    // Setup a volatile int (an integer where the compiler doesn't optimise its location in memory)
    int addressCheck = 0;

    // Check if the previousAddress has been left blank
    if (previousAddress == 0) {

        // If left blank print the address in memory of the addressCheck variable and then recall the function with the address as the input
        cout << "Primary Address: " << &addressCheck << endl;
        return checkCPUStackFill(&addressCheck);

    } else {

        // If the previousAddress input is defined print the new value of the addressCheck varibale and then compare the previous address to address of the addressCheck variable
        cout << "Secondary Address: " << &addressCheck << "\n" << endl;
        
        // Check the previous address against the current to see how it has changed
        if (previousAddress < &addressCheck) {
            // If the previous adress is less then the new address then the CPU stack fills upwards (location in memory increases in value)
            return true;            
        } else {
            // If the previous adress is more then the new address then the CPU stack fills downwards (location in memory decreases in value)
            return false;
        }

    }

}

// Setup the main function which is called when the program is run
int main() {

    // Check whether the CPU stack fills upwards
    if (checkCPUStackFill(NULL)) {

        cout << "CPU stack fills upwards";

    } else {

        cout << "CPU stack fills downwards";

    }

    // End the program
    return 0;
}
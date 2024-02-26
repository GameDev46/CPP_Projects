/*
    Swaps the contents of 2 variables around using pointers
    26/02/24
    by GameDev46
*/

/*

    WHAT IS A POINTER?

    A pointer is a variable which holds the ADDRESS IN MEMORY of another variable. This value can be used to alter the address anywhere in the code without any scope issues.
    
    There are many great videos online that will explain pointers better than I can so I reccomend you visit some of these and watch them

*/

// Load the standard input/output C++ library
#include <iostream>

// Switch to the standard namespace (an alernative to doing this would be to use std:: in front of some inbuilt function names, for example std::cout rather than just cout)
using namespace std;

// Declare the swap function that takes in 2 integer pointers to be swapped
void swap(int *a, int *b) {

    // Store the value that *a (pointer a) points to in memory in the integer temp
    int temp = *a;

    // Set the value of a in memory to the value in memory that b points to (the value of b)
    *a = *b;
    // Set the value of b in memory to the integer stored in temp
    *b = temp;

    // Exit the function
    return;
}

// Setup main function that is called when the program is run
int main() {

    // Declare the starting integers
    int a = 10;
    int b = 15;

    // Print their original values to the console ( \n just means new line )
    cout << "\nInt a is " << a << " and int b is " << b << endl;

    // Swap the contents of the a and b integers (& before a variable name means "the address in memory of" that variable and is commonly called a pointer)
    swap(&a, &b);

    // Print their new values to the console
    cout << "\nAfter swapping int a is " << a << " and int b is " << b << "\n" << endl;

    // End the program
    return 0;
}
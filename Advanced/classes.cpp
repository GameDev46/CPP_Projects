/*
    Demonstration of how classes are declared and used in C++
    27/02/24
    by GameDev46
*/

// Load the standard input/output C++ library
#include <iostream>
// Load the string library that adds in the string type
#include <string>

// Switch to the standard namespace (an alernative to doing this would be to use std:: in front of some inbuilt function names, for example std::cout rather than just cout)
using namespace std;

// Create our custom class
class Person {
    public:
        int age;
        string firstName;
        string lastName;

        void printFullName() {
            cout << firstName << " " << lastName << endl;
        }

        void setPassword(string pass) {
            password = pass;
        }

        bool checkPassword(string pass) {
            return password == pass;
        }

    private:
        string password;
};

// Setup main function that is called when the program is run
int main() {
    // Create a variable based on our class
    Person user;

    // Set the public values of the Person class
    user.age = 17;
    user.firstName = "John";
    user.lastName = "Doe";

    // Call the printFullName() function in the class
    user.printFullName();

    // Set the user password
    user.setPassword("12345");

    // Check if the the users password is 1234
    if (user.checkPassword("1234")) {
        cout << "Correct password!";
    } else {
        cout << "Incorrect password!";
    }
    
    // End the program
    return 0;
}
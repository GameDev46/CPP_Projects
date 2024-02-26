/*
    Simulates the probabilities of sticking or switching in the Monte Carlo problem
    25/01/24
    by GameDev46
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int totalAttempts = 5000;

// Generates a random integer between the lower and upper bound
inline int generateRandomNumber(int lower, int upper) { return (rand() % (upper - lower + 1)) + lower; }

// Perform the Monte Carlo simulation
int main() {

    // Setup the variables that will store the successes for each attempt
    int switchSuccesses = 0;
    int stickSuccesses = 0;

    for (int i = 0; i < totalAttempts; i++) {

        // Select the door which the prize is behind
        int correctDoor = generateRandomNumber(0, 2);

        // Randomly select a door
        int doorPicked = generateRandomNumber(0, 2);

        // Select a door to be revealed (only if it is not the prize and is also not the selected door)
        int revealedDoor = generateRandomNumber(0, 2);

        while (revealedDoor == doorPicked || revealedDoor == correctDoor) {
            revealedDoor = generateRandomNumber(0, 2);
        }

        // Find the door the only other door which hasn't been revealed and isn't already picked
        int switchDoor = 0;

        while (switchDoor == revealedDoor || switchDoor == doorPicked) {
            switchDoor = generateRandomNumber(0, 2);
        }

        // If the switch door is correct then add 1 to the switch successes
        if (switchDoor == correctDoor) switchSuccesses++;

        // If the picked door is correct then add 1 to the stick successes
        if (doorPicked == correctDoor) stickSuccesses++;

    }

    // Calculate the total successful attempts
    float totalSuccesses = float(stickSuccesses + switchSuccesses);

    cout << "\nWith " << totalSuccesses << " iterations:\n\n" << endl;

    // Print the probabilities of selecting the correct prize door whether you switch or stick
    cout << "Switch succcess: " << float(switchSuccesses) / totalSuccesses * 100.0f << " percent\n" << endl;
    cout << "Stick succcess " << float(stickSuccesses) / totalSuccesses * 100.0f << " percent\n\n" << endl;

    return 0;
}
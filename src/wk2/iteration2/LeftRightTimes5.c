#include <stdio.h>

int goLeftOrRight();

int main() {
    int foundExit = 0; // Flag to check if the exit is found
    int turns = 0; // Count the number of turns taken

    // Game loop
    while (!foundExit) {
        printf("You're in a maze. Turn %d. ", turns + 1);
        if (goLeftOrRight()) {
            printf("You turn right.\n");
        } else {
            printf("You turn left.\n");
        }

        turns++;

        // Simple condition to end the loop (could be replaced with actual game logic)
        if (turns == 5) {
            foundExit = 1;
            printf("You've found the exit after %d turns!\n", turns);
        }
    }

    return 0;
}

// Function definition
int goLeftOrRight() {
    char choice;
    printf("Do you want to go left or right? (l/r): ");
    scanf(" %c", &choice);
    return choice == 'r' || choice == 'R';
}
#include <stdio.h>

// Function to ask the user to go left or right
// Returns 1 for right, 0 for left
int goLeftOrRight() {
    char choice;

    printf("Do you want to go left or right? (l/r): ");
    scanf(" %c", &choice); // The space before %c is to skip any whitespace

    if (choice == 'r' || choice == 'R') {
        return 1; // Right
    } else {
        return 0; // Left or any other input
    }
}

int main() {
    if (goLeftOrRight()) {
        printf("You chose to go right.\n");
    } else {
        printf("You chose to go left.\n");
    }

    return 0;
}

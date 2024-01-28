# include <stdio.h>

int goLeftOrRight();

int main() {
    char* items[] = {"Key", "Map", "Torch", "Compass"};
    int numberOfItems = sizeof(items) / sizeof(items[0]);
    int foundExit = 0;
    int turns = 0;

    printf("Welcome to the Maze Game!\n");

    for (int i = 0; i < numberOfItems; i++) {
        printf("\nTurn %d: You encounter a %s.\n", turns + 1, items[i]);

        // Decision point using goLeftOrRight function
        if (goLeftOrRight()) {
            printf("You chose to turn right.\n");
        } else {
            printf("You chose to turn left.\n");
        }

        // Simulate a scenario for each item
        printf("You have found and collected the %s.\n", items[i]);

        turns++;

        // Check for exit condition
        if (i == numberOfItems - 1) {
            foundExit = 1;
            printf("\nYou've collected all items and found the exit after %d turns!\n", turns);
        }
    }

    return 0;
}

int goLeftOrRight() {
    char choice;
    printf("Do you want to go left or right? (l/r): ");
    scanf(" %c", &choice);
    return choice == 'r' || choice == 'R';
}
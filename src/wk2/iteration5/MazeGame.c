# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int getDirectionChoice();
int isCorrectChoice(int choice, int correctChoice);
void initializeRandom();

int main() {
    char* items[] = {"Key", "Map", "Torch", "Compass"};
    int size = sizeof(items) / sizeof(items[0]);
    int turns = 0;
    int correctChoice, playerChoice;
    int itemsFound = 0;

    initializeRandom();

    printf("Welcome to the Enhanced Maze Game!\n");

    while (itemsFound < size) {
        correctChoice = rand() % 4; // Random choice between 0 and 3
        printf("\nTurn %d: Choose your direction to find the %s.\n", turns + 1, items[itemsFound]);

        playerChoice = getDirectionChoice();
        turns++;

        if (isCorrectChoice(playerChoice, correctChoice)) {
            printf("You've found the %s!\n", items[itemsFound]);
            itemsFound++;
        } else {
            printf("Wrong direction. Keep searching!\n");
        }
    }

    printf("\nCongratulations! You've found all items in %d turns!\n", turns);
    return 0;
}

int getDirectionChoice() {
    char choice;
    printf("Choose a direction (l: left, r: right, f: forward, b: back): ");
    scanf(" %c", &choice);

    // Map the choices to numbers
    switch(choice) {
        case 'l': return 0;
        case 'r': return 1;
        case 'f': return 2;
        case 'b': return 3;
        default: return -1; // Invalid choice
    }
}

int isCorrectChoice(int choice, int correctChoice) {
    return choice == correctChoice;
}

void initializeRandom() {
    srand(time(NULL)); // Initialize random seed
}
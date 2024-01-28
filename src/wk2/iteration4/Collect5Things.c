# include <stdio.h>

int goLeftOrRight();

int main() {
    char* items[] = {"Key", "Map", "Torch", "Compass"};
    char** pItem;
    int foundExit = 0;
    int turns = 0;

    printf("Welcome to the Maze Game!\n");

    for (pItem = items; pItem < items + sizeof(items) / sizeof(items[0]); pItem++) {
        printf("\nTurn %d: You find a %s.\n", turns + 1, *pItem);

        if (goLeftOrRight()) {
            printf("You chose to turn right.\n");
        } else {
            printf("You chose to turn left.\n");
        }

        printf("You have collected the %s.\n", *pItem);
        turns++;

        if ((pItem - items) == sizeof(items) / sizeof(items[0]) - 1) {
            foundExit = 1;
            printf("\nYou've collected all items and found the exit after %d turns!\n", turns);
            break;
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
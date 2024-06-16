#include <stdio.h>

void printRow(int totalHeight, int currentRow);

int main(void) {
    int height;

    // Prompt user for the height of the pyramid
    printf("Height of a pyramid: ");
    scanf("%d", &height);

    // Loop to print each row of the pyramid
    for (int j = 1; j <= height; j++) {
        printRow(height, j);
        printf("\n");  // Move to the next line after printing each row
    }

    return 0;
}

// Function to print a row of the pyramid with leading spaces for alignment
void printRow(int totalHeight, int currentRow) {
    // Print leading spaces
    for (int i = 0; i < totalHeight - currentRow; i++) {
        printf(" ");
    }
    // Print hashes
    for (int i = 0; i < currentRow; i++) {
        printf("#");
    }
}


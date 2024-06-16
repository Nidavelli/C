#include <stdio.h>
#include <string.h>

int main(void) {
    // Array of strings (character arrays)
    const char* arr[7] = {"Matthew", "Samia", "Alyssa", "Douglas", "Cecelia", "Lucas", "Ramya"};

    // Asking for something to be searched
    char f[255];
    printf("What are you searching for? ");
    scanf("%s", f);

    // Loop through the array
    int found = 0;
    for (int i = 0; i < 7; i++) {
        if (strcmp(f, arr[i]) == 0) {
            printf("Found %s at index %d\n", arr[i], i);
            found = 1;
            break; // Exit loop if found
        }
    }

    if (!found) {
        printf("Not found\n");
    }

    return 0;
}

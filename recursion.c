#include <stdio.h>

void draw(int a);

int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {  // Ensure valid input
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }
    draw(n);
    return 0;
}

void draw(int a) {
    if (a<=0){
        return;
    }

    //Draw pyramid
    draw(a-1);

    //Print one more row
    for (int i = 0; i < a; i++) {
        printf("*");
    }
    printf("\n");
}

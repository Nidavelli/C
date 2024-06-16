#include <stdio.h>

const int N = 3;

int main(void) {
    int score[N];
    int sum = 0;
    float average;

    printf("Average of 3 numbers\n\n\n");

    for (int i = 0; i < N; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];
    }

    average = sum / (float)N;
    printf("The average is: %.2f\n", average);

    return 0;
}


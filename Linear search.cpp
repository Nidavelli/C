#include <stdio.h>

int main(void){
    int numbers[]={20,100,10,5,100,1,50};
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0 ; i < 7 ; i++){
        if (n == numbers[i]){
            printf("Number %d found!!.",n);
            return 0;
        }
    }
    printf("Not found!");
    return 1;
}

#include <stdio.h>
void swap(int *a, int *b);
int main(void){
    int x=1;
    int y=2;

    swap(&x,&y);
    printf("X = %d , Y = %d",x,y);
}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
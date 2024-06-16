#include <stdio.h>

int main(void){
    char name[250];
    printf("Input your name: ");
    fgets(name, 250, stdin);
}
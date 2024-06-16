#include <stdio.h>
#include <string.h>
int main(void){
    typedef struct{
        char name[255];
        int age;
        int votes;
    }candidate;
    
    candidate president;
    strcpy(president.name, "Shyna Vutoli"); //copies string to char array
    president.age=25;
    president.votes=10;

    printf("Your president is: %s, age %d, with %d votes.\n",president.name,president.age,president.votes);
}

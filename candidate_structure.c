#include <stdio.h>
#include <string.h>
typedef struct candidate_structure
{
    char name[255];
    int votes;
}candidate_structure;

int main(void){
    const int number_of = 3;

    candidate_structure candidate[number_of];
    strcpy(candidate[0].name, "Mark");
    candidate[0].votes=34;

    strcpy(candidate[1].name, "Shyna");
    candidate[1].votes=90;

    strcpy(candidate[2].name, "Jeremy");
    candidate[2].votes=28;

    //TODO: Find the highest number of votes
    int highest = 0;
    for (int i = 0; i < number_of; i++)
    {
        if (candidate[i].votes > highest){
            highest = candidate[i].votes;
        }
    }
    
    //TODO: Print name of candidate with highest number of votes
    for (int i = 0; i < number_of; i++){
        if (candidate[i].votes == highest){
            printf("The winner is %s with %d votes.\n", candidate[i].name,highest);
        }
    }
}
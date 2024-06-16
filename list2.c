#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *string;
    struct node* next;
} node;

int main(void) {
    node *list = NULL;
    node *n = malloc(sizeof(node));
    n->string = malloc(strlen("Hello") + 1);
    strcpy(n->string, "Hello");
    n->next = NULL;
    list = n;
    printf("%s\n", list->string);

    node *p = malloc(sizeof(node));
    p->string = malloc(strlen(" World") + 1);
    strcpy(p->string, " World");
    p->next = list;
    list = p;
    printf("%s\n", list->string);

    // Free the memory
    free(list->next->string);
    free(list->next);
    free(list->string);
    free(list);

    return 0;
}
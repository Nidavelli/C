#include <stdio.h>
#include <stdlib.h>

typedef char *string;
int main(void){
    int n=50;
    int *pointer = &n;
    printf("Value of n variable: \n");
    printf("""%d\n", n);
    printf("\n Its pointer is : \n");
    printf("%p\n", pointer);
    printf("\nThe pointer points to: \n");
    printf("%d\n",*pointer);

    char *string="Hello!";
    printf("\nValue of string variable: \n");
    printf("%s\n", string);
    
    char *s = malloc(100);
    printf("Enter your name: ");
    scanf("%99s",s);//dont pass &s  //Use fgets(s, 100 ,"\n")
    if (s == NULL){
        printf("Memory not allocated.\n");
        return 1;
    }
    printf("Your name is: %s\n",s);
    free(s);



    string q = "Hello World!!";
    
    printf("%s\n",q);

    
}
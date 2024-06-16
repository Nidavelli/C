//5! = 5*3*2*1
#include <stdio.h>
int factorial(int a);

int main(void){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int result = factorial(number);
    printf("The factorial of %d is:  %d",number,result);
}

int factorial(int a){
    //base case
   if (a==1){
    return 1;
   }

   //recursive case
   return a * factorial(a-1);

}
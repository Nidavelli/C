#include <stdio.h>

int main(void){
	int a,b;
	
	printf("Creating a m*n brick\n");
	printf("Enter the number of rows:\n ");
	scanf("%d",&b);
	printf("Enter the number of columns:\n ");
	scanf("%d",&a);
	
	printf("\n\n");
	
	for (int i=0 ; i<b ; i++){
		for (int j=0 ; j<a ; j++){
			printf("*	");
		}
		printf("\n\n");
	}
}

#include <stdio.h>

int main(void){
	char a=254,b=176,c=177,d=178;
	for(int i = 0 ; i < 4 ; i++){
		for (int j = 0 ; j < 9 ; j++){
			printf("%c ",a);
		}
		printf("\n");
	}
	}

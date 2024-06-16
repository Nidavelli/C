#include <stdio.h>

int add(int a,int b);

int main(void){
	int x,y;
	
	printf("X: ");
	scanf("%d",&x);
	printf("Y: ");
	scanf("%d",&y);
	
	printf("Addition is: \n%d\n",add(x,y));
}

int add(int a,int b){
	return a+b;
}

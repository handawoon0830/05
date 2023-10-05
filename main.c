#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int trial;
	a=129;
	trial=1;
	printf("enter the number:");
	scanf("%d",&b);
	
	while (b!=a)
	{
		if (b>a){
		printf("high\n");
		printf("enter the number:");
		scanf("%d",&b);
		trial+=1;
		}
	else if (b<a){
		printf("low\n");
		printf("enter the number:");
		scanf("%d",&b);
		trial+=1;
		}
	};
	printf("answer");
	printf("congratulation trials: %d", trial);
	return 0;
}

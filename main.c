#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("input the number:");
	scanf("%d",&a);
	
	if (a>0)
		printf("양수입니다");
	else if (a<0)
		printf("음수입니다");
	else
		printf("0입니다");
	return 0;
}

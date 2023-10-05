#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("enter the number:");
	scanf("%d",&a);
	
	if (a>=0)
		printf("%d",a);
	else if (a<0);
		printf("%d",-a); 
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c; //char으로 잡아도 문제 없음 
	int num;
	
	num=0;
	
	printf("input a string:");
	
	while((c=getchar()) != '\n')
	{
		if (c>='0' && c<='9') //'0'<= c<= '9'은 문법적으로 틀림 
			num= num+1;
	}
			
	printf("%d",num);
	return 0;
}

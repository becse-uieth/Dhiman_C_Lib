#include "header.h"
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
	int a,b,choice;
	
	
	while(1){
		printf("---Choose your option---\n");
		printf("1. ADD\n");
		printf("2. SUBTRACT\n");
		printf("3. MULTIPLY\n");
		printf("4. DIVIDE\n");
		printf("5. EXIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			printf("Enter two numbers to add...\n");
			scanf("%d %d",&a,&b);
			printf("Result is %d\n",sum(a,b));
			break;

			case 2:
			printf("Enter two numbers to subtract...\n");
			scanf("%d %d",&a,&b);
			printf("Result is %d\n",sub(a,b));
			break;

			case 3:
			printf("Enter two numbers to multiply...\n");
			scanf("%d %d",&a,&b);
			printf("Result is %d\n",mul(a,b));
			break;

			case 4:
			printf("Enter two numbers to divide...\n");
			scanf("%d %d",&a,&b);
			printf("Result is %d\n",divd(a,b));
			break;

			case 5:
			exit(1);
			break;

			default:
			printf("Wrong option..\n");
		}
	}
	return 0;
}

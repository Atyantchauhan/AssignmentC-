#include<stdio.h>
int main(){
	int num;
	printf("Enter what you want to print  number\n1good.\n2better.\n3best.\n4Invalid.\n");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("good");
			break;
		case 2 : 
		    printf("better");
		    break;
		case 3 :
			printf("best");
			break;
		default :
			printf("Invalid");
	}
}

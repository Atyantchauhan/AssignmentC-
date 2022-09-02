#include<stdio.h>
int main(){
	int digit,number;
	printf("Enter a digit and  a number ");
	scanf("%d%d",&digit,&number);
	int value = number*10;
	value += digit;
	printf("\n append value is %d ",value);
	return 0;
}





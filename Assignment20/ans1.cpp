//1. Write a function to swap values of two in variables of calling function. (TSRS)


#include<stdio.h>

// swap function definition
void swapFun(int *p,int *q){
	int x = *p;
	*p = *q;
	*q = x;
	
}

int main(){
	int a = 5;
	int b = 6;
	swapFun(&a,&b);
	printf("%d,%d",a,b);
	
}

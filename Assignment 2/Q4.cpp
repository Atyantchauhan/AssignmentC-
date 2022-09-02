#include<stdio.h>
int main(){
	int x = 10;
	int  y = 20;
	printf("x = %d and  y = %d \n ",x,y);
	x = x+y;
	y = x-y;
	x = x-y;
	printf("x = %d and y = %d ",x,y);	
	return 0;
}


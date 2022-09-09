//7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	p = (int*)malloc(sizeof(int));
	*p = 5;
	printf("when we are make program  we allocate memory by malloc,colloc funtion after the complete the work of p(allocate memory)  it will not distory and it consumed memoryit called leak memory  so if we want to escape this problem we need to use free function  free();");
	  free(p);
	 
	 return 0;
}


//5. Write a program to find the maximum number between two numbers using a pointer


#include<stdio.h>
int maximum(int* a,int*b,int* max);
int maimum(int *a,int *b,int *max){
    *max = *a>*b?*a:*b;
	
}
int main(){
	int a;
	int b;
	printf("Enter the value a ");
	scanf("%d",&a);
	printf("Enter the value b ");
	scanf("%d",&b);
	int max;
	maximum(&a,&b,&max); // call by referance 
	printf("maximum number is %d ",max);
	
	return 0;
}



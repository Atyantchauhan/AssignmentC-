//5. Write a program to find the maximum number between two numbers using a pointer


#include<stdio.h>
void maimumNumber(int *p,int *q){
	if(p>q){
		printf("%d",p);
	}else{
		printf("%d",q);
	}
}
int main(){
	int a,*p;
	int b,*q;
	printf("Enter the value a ");
	scanf("%d",&a);
	printf("Enter the value b ");
	scanf("%d",&b);
	p = &a;
	q = &b;
	maximumNumber(p,q); // call by referance 
	
	return 0;
}


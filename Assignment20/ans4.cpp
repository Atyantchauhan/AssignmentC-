//4. Write a program in C to demonstrate how to handle the pointers in the program.



#include<stdio.h>
int main(){
	int a,*p;  // pointer variable dicarlartion
	printf("Enter a Number ");
	scanf("%d",&a); // get the value using '&' 
	
	p = &a; //assiagn the address of a in pointer valriable p 
	
	printf("The value of a is %d\n",a); // value of a 
	printf("address is a = %d\n",p);  // address of a in decimal
	printf("Address in hexadecimal form a = %p");  // hexadecimal form
	
	
	return 0;
}

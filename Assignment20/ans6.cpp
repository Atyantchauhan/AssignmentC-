//6. Write a program to calculate the length of the string using a pointer


#include<stdio.h>
//function diclartion
int length(char*p){
	int i;
	for( i=0;*(p+i);i++);
	return i;
	
	
}

int main(){
	char str[20];
	printf("Enter a string ");
	gets(str);
	int l = length(str);
	printf("length of string is %d",l);
	
	return 0;
}

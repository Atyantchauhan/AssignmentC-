//2. Write a function to reverse a string.



#include<stdio.h>
#include<string.h>
void ReverseString(char str[]){
	printf("Reverse string is %s ", strrev(str));
}

int main(){
	char str[100];
	printf("Enter string ");
	fgets(str,100,stdin);
	ReverseString(str);
	return 0;
}

//10. Write a program to print a string in reverse using a pointer using a pointer



#include<stdio.h>
#include<string.h>
void reverse(char *,int);
void reverse(char *p,int size){
	int i;
	printf("reverse element is : ");
	for(i=size;i>=0;i--){
	   printf("%c",*(p+i));
	}
}
int main(){
	char str[10];
	printf("Enter Name ");
	gets(str);
	int l = strlen(str)-1;
    reverse(str,l);
	   
	   
}
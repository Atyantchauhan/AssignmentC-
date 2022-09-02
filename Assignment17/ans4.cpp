//4. Write a program to convert a given string into uppercase

#include<stdio.h>
int main(){
	char str[100];
	printf("Enter the string ");
	fgets(str,100,stdin);
	int i,j;
	for(i=0;str[i];i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			  str[i] = str[i]-32;
	      	
		}
		
	}
	
	for(i=0;str[i];i++){
		printf("%c",str[i]);
	}
	
}

// Write a function to check whether a given string is palindrome or not.


#include<stdio.h>
#include<string.h>
int palindrome(char str[]){
	int l,temp,i;
	l = strlen(str)-1;


		for(i=0;i<l/2;i++){
			if(str[i] == str[l-i-1]){
				temp = 1;
			}
			else{
				temp = 0;
			
			}
		}

	
	return temp;
}
int main(){
	char str[100];
	
	printf("Enter string ");
	fgets(str,100,stdin);
	if(palindrome(str)){
		printf("Panlindrome");
	}else{
		printf("Not Palindrome");
	}
	
}

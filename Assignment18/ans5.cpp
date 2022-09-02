//5. Write a function to transform a string into lowercase



#include<stdio.h>
#include<string.h>
void lowercaseString(char str[]){
	printf("lowercase string is %s ",strlwr(str));
}

int main(){
	char str[100];
	printf("Enter string ");
	fgets(str,100,stdin);
	lowercaseString(str);
	return 0;
}

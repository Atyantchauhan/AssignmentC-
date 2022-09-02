//4. Write a function to transform string into uppercase



#include<stdio.h>
#include<string.h>
void uppercaseString(char str[]){
		printf("uppercase string is %s ",strupr(str));
}

int main(){
	char str[100];
	printf("Enter string ");
	fgets(str,100,stdin);
     
     uppercaseString(str);
     
	return 0;
}

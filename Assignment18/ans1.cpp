#include<stdio.h>
#include<string.h>
int lengthString(char str[]){
		int l = strlen(str);
	      return l-1;
}
int main(){
	char str[100];
	printf("Enter string ");
	fgets(str,100,stdin);
     printf("%d",lengthString(str));
     return 0;
 }




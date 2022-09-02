//3. Write a function to compare two strings.

#include<stdio.h>
#include<string.h>
void compareString(char str1[],  char str2[]){
	int r = strcmp(str1,str2);
     if(r==0){
     	printf("String is same ");
	 
	 }
	 else {
	 	printf("String is not same");
	 }
	
}

int main(){
	char str1[100];
	char str2[100];
	printf("Enter first string : ");
	fgets(str1,100,stdin);
	printf("Enter second string : ");
	fgets(str2,100,stdin);
	compareString(str1,str2);
     
	
}

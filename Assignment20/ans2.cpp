//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)




#include<stdio.h>
#include<string.h>
void swapstring(char *p ,char *q){
	char temp[20];
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
    
}
void display(char *p ,char *q){
	printf("%s",p);
	printf(" %s",q);
}

int main(){
	char str[20];
	printf("Enter Name ");
	gets(str);
	char str1[20];
	printf("last Name ");
	gets(str1);
	
	swapstring(str,str1);
	display(str,str1);
	
	
	return 0;
}

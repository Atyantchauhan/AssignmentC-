//4. Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
char* input(){
	char *str,c;
	str = (char*)malloc(sizeof(char));
	int i=0,j=1;
	while(c != '\n'){
		c = getc(stdin);
		j++;
		str = (char*)realloc(str,j*sizeof(char));
		*(str+i) = c;
		i++;
	}
	str[i] ='\0';
	
	return str;
}
int main(){
	char *p;
	printf("Please Enter Any text : ");
	p = input();
	int i;
	printf("\nEnter string is : ");
	for(i=0;*(p+i);i++){
		printf("%c",*(p+i));
	}
	free(p);
	return 0;
}
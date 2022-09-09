//1. Define a function to input variable length string and store it in an array without
//memory wastage.

#include<stdio.h>
#include<stdlib.h>
char* input(){
	    char *str,c;
	    int i=0,j=1;
	    str = (char*)malloc(sizeof(char));
    	while(c != '\n'){	
		c = getc(stdin);
		j++;
		str = (char*)realloc(str,j*sizeof(char));
		str[i] = c;
		i++;
	}

	str[i] ='\0';
	return str;
}

int main(){
    char *str = NULL;
    printf("Enter a string :");
    str = input();
    printf("Enter string is %s",str);
    free(str);
	return 0;
	
}
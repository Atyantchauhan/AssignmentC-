#include<stdio.h>
int main(){
	char a;
	printf("Enter \n 1. Alphabat \n 2.Digit \n 3.Special Character \n ");
	scanf("%c",&a);
	if(a>= 'A' && a<='Z' )
		printf("UpperCase");
	else if(a>=97 &&a<=122)
       	printf("LowerCase");
       	
    else if(a>=48 && a<=57)
	    printf("Number");	
     else
     printf("Symbol");
       	return 0;
      }


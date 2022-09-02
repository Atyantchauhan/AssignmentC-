  
#include<stdio.h>
int main(){
	int Num;
	printf("Enter a Number ");
	scanf("%d",&Num);
	
	if(0<Num)
		printf("Positive");	
	else if(0==Num )
			printf("Number is Zero ");
	     else
		   printf("Negative");	
                       return 0;
}


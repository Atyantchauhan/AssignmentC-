#include<stdio.h>
int main(){
	char a;
	printf("Enter alphabat ");
	scanf("%c",&a);
	if(a>= 'A' && a<='Z' )
	printf("UpperCase");
	else
	printf("LowerCase");
	
    return 0;
}


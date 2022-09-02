#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter three  cofficent  ");
	scanf("%d%d%d",&a,&b,&c);
	int D = b*b-4*a*c;
	if(D>0){
		printf("Real and Distinct Roots");
	}
	else if(D==0){
		printf("Real and Equal Roots");
	}
	else{
		printf("Imaginary Roots");
	}
}

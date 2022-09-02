#include<stdio.h>
int factorial(int);
int main(){
	int num; 
	 printf("Enter a Number ");
	 scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}
int factorial(int n){
	int i,result  = 1;
	for(i=1;i<=n;i++){
		 result *= i;
	}
	return result;
}

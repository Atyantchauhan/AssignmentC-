#include<stdio.h>
int sumNatural(int num){
	int k,n;
	if(num>0){
	  
	  n = num*2-1;
	  k  =  n + sumNatural(num-1);
	   return k;
	}
     
}
int main(){
	int num;
	printf("Enter a  number ");
	scanf("%d",&num);
	printf("Sum is %d Number %d",num,sumNatural(num));
}

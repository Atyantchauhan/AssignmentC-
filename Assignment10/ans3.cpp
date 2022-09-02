#include<stdio.h>
int OddEven(int);
int main(){
	int num; 
	 printf("Enter a number for check odd or Even  ");
	 scanf("%d",&num);
     printf("%d",OddEven(num));
     return 0;
}
int OddEven(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
	
}

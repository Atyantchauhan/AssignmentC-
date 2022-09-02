#include<stdio.h>
int DigitCheck(int , int);
int main(){
	int num,digit;
	printf("Enter a number and digit to check\nWhether numbr contains digit or not ");
	scanf("%d%d",&num,&digit);
	int result = DigitCheck(num,digit);
	result == 1 ? printf("Number Contains digit ") : printf("Number not contains digit ");
	return 0;
}
int DigitCheck(int n , int d){
	int i;
	int flag =0;
	while(n != 0){
		for(i=0;i<=9;i++){    
			if(d==i){
				if(n%10==i){
					flag = 1;
			     	break;
				}
			}
			
		}	
		if(flag == 1){
			return 1;
		}
		n = n/10;		
	}
	
	return 0;
}

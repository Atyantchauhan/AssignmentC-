#include<stdio.h>
int main(){
	int num,result,sum;
	printf("Enter a number ");
	scanf("%d",&num);
	int numC = num;
	while(num !=0){
		result = num%10;
		sum += result*result*result;
		num = num/10;
		
	}
	if(sum == numC){
		printf("Armstrong Number");
	}
	else{
		printf("Not Armstrong Number");
	}
	
	
	return 0;
	
}

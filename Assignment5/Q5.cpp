#include<stdio.h>
int main(){
	int i =1;
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	
	while(i<=num){
		printf(" %d \n",num*2-1);
		num--;
	}
	
	return 0;
}

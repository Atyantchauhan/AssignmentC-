#include<stdio.h>
int main(){
	int i =1;
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	
	while(i<=10){
		printf(" %d X %d = %d \n",num,i,num*i);
		i++;
	}
	
	return 0;
}

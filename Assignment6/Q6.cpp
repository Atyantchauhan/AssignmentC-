#include<stdio.h>
int main(){
	int  i=1 ;
	int num; 
	int factorial =1;
	printf("Enter a  Number ");
	scanf("%d",&num);
	int showNum = num;
	
	while(i<=num){
	   factorial *=  num;
	   num--;	
	   
	}
	printf("  %d ! is %d ",showNum,factorial);
	
	return 0;
}

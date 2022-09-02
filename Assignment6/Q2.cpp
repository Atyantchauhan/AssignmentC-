#include<stdio.h>
int main(){
	int  i=1 ;
	int num , sum = 0;;
	printf("Enter a  Number ");
	scanf("%d",&num);
	
	while(i<=num){
		
	   sum += 2*i;
	   i++;	
	}
	printf(" %d ",sum);
	
	return 0;
}

#include<stdio.h>
int main(){
	int i;
   
	int greatest[10];
	printf("Enter 10 Numbr ");
	for(i=0;i<10;i++){
		scanf("%d",&greatest[i]);
		
	}
	 int greatestResult = greatest[0];
		for(i=1;i<10;i++){
		  if(greatestResult<greatest[i])
		  greatestResult = greatest[i] ; 
		  
	}
		printf(" \n greatest value %d ",greatestResult);
       	return 0;
	
}

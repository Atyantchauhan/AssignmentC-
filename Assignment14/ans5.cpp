#include<stdio.h>
int main(){
	int i;
	int smallest[10];
	printf("Enter 10 Numbr ");
	for(i=0;i<10;i++){
		scanf("%d",&smallest[i]);
		
	}
	 int smallestResult = smallest[0];
	
		for(i=1;i<10;i++){
			if(smallestResult > smallest[i]){
				smallestResult = smallest[i];
			}
		 
	}
		printf(" \nsmallest value %d ",smallestResult );
      
       	return 0;
	
}

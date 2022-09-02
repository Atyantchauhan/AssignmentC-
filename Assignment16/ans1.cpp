//1. Write a program to calculate the sum of two matrices each of order 3x3.

#include<stdio.h>
int main(){
	int i,j;
	int arr[3][3]={ {14,15,16},
	                {14,16,17},
	                {51,75,87}};
	                
	int arr2[3][3] ={ {14,15,16},
	                {14,16,17},
	                {51,75,87}};
	                
   int arr3[3][3];
	                
	                

	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){	
	    	arr3[i][j]= arr[i][j] + arr2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
		printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

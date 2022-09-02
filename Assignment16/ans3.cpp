// Write a program in C to find the transpose of a given matrix.

#include<stdio.h>
int main(){
	int i,j;
	int arr[3][3]={ {5,2,3},
	                {10,11,20},
	                {16,17,80}};
	                                       
    int arr2[3][3];
	                
	                
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){	
	     arr2[i][j] = arr[j][i] ;
	         
		}
		
	
		
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
		printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}

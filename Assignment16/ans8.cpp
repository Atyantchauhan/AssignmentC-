//8. Write a program in C to print or display an upper triangular matrix.



#include<stdio.h>
int main(){
	int arr[100][100];
	int n,i,j;
	
		
	//  for get value of matrix
	
	
	
	
	printf("Enter value of Matrix... \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("arr[%d][%d] " ,i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
		
	
	//  for print matrix
	
	
	
		printf("\nMatrix... \n\n");
	
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("%d ",arr[i][j]);
		}
		printf("\n\n");
	}
	
	
	//  for print upper triangular of a given matrix
	
	
	printf("\nUpper triangular of a given matrix \n\n");
	
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i>j){
				printf("0 ");
			}else{
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n\n");
	}
	
	
	
	
	
	
}

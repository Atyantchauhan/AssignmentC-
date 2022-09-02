//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.


#include<stdio.h>
int main(){
	int arr[100][100];
	int i,j,count=0;
	printf("Enter matrix value....\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("arr[%d][%d]  ",i,j);
			scanf("%d",&arr[i][j]);
			if(arr[i][j] == 0){
				++count;
			}
		}
		printf("\n");
	}
	
	
	
	printf("\n matrix...\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}

	
	if(count>9/2){

		printf("\nIt is Sparse matrix.");
	}else{
			printf("\nIt is not Sparse matrix.");
	}
}

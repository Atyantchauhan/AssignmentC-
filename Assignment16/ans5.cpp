//5. Write a program in C to find the sum of left diagonals of a matrix.



#include<stdio.h>
int main(){
	int arr[100][100];
	int size,i,j,sum=0;
	printf("Enter size of matrics ");
	scanf("%d",&size);
	
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Enter row %d and column %d   " ,i,j);
			scanf("%d",&arr[i][j]);
		} 
	}
	
    printf("\nHere the matrix.....\n\n");
		for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d     " ,arr[i][j]);
		}
		printf("\n");
	}
   
   	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		   if( i+j == size-1){
		   	 sum += arr[i][j];
		   }
		}
	
	}
		printf("\nsum of left diagonals of a matrix is %d  ",sum);
		printf("\n\n\n");
		
	

}

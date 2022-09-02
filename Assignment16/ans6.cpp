//6. Write a program in C to find the sum of rows and columns of a Matrix

#include<stdio.h>
int main(){
	int arr[100][100];
	int size,i,j,sum=0,sum1=0;
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
			printf("%d " ,arr[i][j]);
		}
		printf("\n");
	}
   
   	for(i=0;i<size;i++){
   		int k = 0;
		for(j=0;j<size;j++){
         	 sum += arr[j][k];
		}
		break;
	
	}
	
	 for(i=0;i<size;i++){
	 	int k = 0;
		for(j=0;j<size;j++){
         	 sum1 += arr[k][j];
		}
		break;
	
	}
		printf("\nsum of row matrix is %d  ",sum);
		printf("\nsum of column matrix is %d  ",sum1);
		printf("\n\n\n");
		
	

}

//10. Write a program in C to find the row with maximum number of 1s.




#include<stdio.h>
int main(){
	int temp,temp1=0,result=0,result1=0;
	int arr[100][100];
	int arr1[100];
	int i,j,k,count=0;
	
	printf("Enter matrix value....\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("arr[%d][%d]  ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("\n matrix...\n\n");
	
	for(i=0,k=0;i<3,k<3;i++,k++){
		count =0;
		for(j=0;j<3;j++){
			if(arr[i][j]==1){
			     count++;
			}
			
		}
	    arr1[k] = count; 			
	}

	
   for(i=0;i<3;i = i+2){
   	   if(arr1[i]>arr1[i+1]){
   	   	   result = arr1[i];
   	   	   result1 = i;
		}
	   
   }
   printf("%d count \n",result);
   printf("%d row \n ",result1);
 
	
}

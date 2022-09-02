

#include<stdio.h>
 int firstOcurence(int arr[], int size){
 	int i,ans;
 	for(i=0;i<size;i++){
 		if(arr[i]==arr[i+1]){
 			  if(arr[i]== arr[size]){
 			  	return 0;
			   }
			   return arr[i];
		 }
	 }

 
 }
 int main(){
 	int arr[5];
 	int i,size;
 	printf("Enter the size of arr ");
 	scanf("%d",&size);
 	for(i=0;i<size;i++){
 		scanf("%d",&arr[i]);
	 }
 	printf("\n%d ",firstOcurence(arr,size));
 }

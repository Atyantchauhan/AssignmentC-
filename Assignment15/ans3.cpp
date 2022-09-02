#include<stdio.h>
void shortArr(int arr[] , int size){
	int i,j,temp;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
   
}
int main(){
	int arr[100];
	int size;
	int i;
	printf("Enter the size of arr ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	shortArr(arr,size);
} 

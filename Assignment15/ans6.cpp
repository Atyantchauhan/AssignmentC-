#include<stdio.h>
void reverse(int arr[], int size){
	int i;
	for(i=size-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}
int main()
{
	int size,i;
	int arr[100];
	printf("How many  Number Enter by You ");
	scanf("%d",&size);
	printf("Entr number ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	reverse(arr,size);
	
}

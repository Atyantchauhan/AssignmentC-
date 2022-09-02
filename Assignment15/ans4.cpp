
#include<stdio.h>
void position(int arr[] , int size , int n ,int d){
	int i,temp;
     if(d){
     	while(n){
     	temp = arr[size-1];
     	for(i=size-1;i>=1;i--){
		arr[i] = arr[i-1];
		
	}
	arr[0] = temp;
	n--;
	
	 }
	 
	 } else{
	 		while(n){
     	temp = arr[0];
     	for(i=0;i<size;i++){
		arr[i] = arr[i+1];
		
	}
	arr[size-1] = temp;
	n--;
	
	 }
	 	
	 }
}
void display(int arr[], int size){
	for(int i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
	
}
int main(){
	int arr[100];
	int size;
	int d,i;
	int n;
	printf("How many enter You a Number ");
	scanf("%d",&size);
	printf("Enter number ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter direction... If You want rotate to the right then press 1 \nIf You want to the left the press 0 ");
	scanf("%d",&d);
	printf("Enter the position which position to rotate ");
	scanf("%d",&n);
	position(arr,size,n,d);
	printf("rotate Number is ");
	display(arr,size);
}

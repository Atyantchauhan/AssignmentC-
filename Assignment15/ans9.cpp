#include<stdio.h>
void marge(int arr[],int size ,int arr2 [], int size2, int arr3[]){
	    int i,j,temp;
		for(j=0;j<size;j++){
			arr3[j] = arr[j];
		}
		for(i=size,j=0;j<size2;i++,j++){
			arr3[i] = arr2[j];
		}
	   int sumSize = size + size2;
	  for(i=0;i<sumSize;i++){
	  	for(j=i+1;j<sumSize;j++){
	  		if(arr3[i] < arr3[j])
	  		     {
	  		     	temp = arr3[i];
	  		     	arr3[i] = arr3[j];
	  		     	arr3[j] = temp;
				   }
		  }
	  }
		
		
}

void display(int arr3[],int sumSize){
	int i;
	for(i=0;i<sumSize;i++){
		printf("%d ",arr3[i]);
	}
}
int main(){
	int arr[100],arr2[100],arr3[100];
	int i,size,size2;
	printf("Enter length first line of Number ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter length  second line of Number  ");
	scanf("%d",&size2);
	for(i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	int sumSize = size+size2;
	marge(arr,size,arr2,size2,arr3);
	printf("\nMarge short array ");	
	display(arr3,sumSize);
}


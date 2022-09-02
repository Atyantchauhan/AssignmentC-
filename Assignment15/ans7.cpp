
//7. Write a function in C to count a total number of duplicate elements in an array.




#include<stdio.h>
void dupicate(int arr[], int size){
	int i,j,count=0;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i] == arr[j]) // for check dupicate 
			   count++;
		}
	}

	if(count){
		printf("Total duplicate element is %d ",count);
	}else{
		printf("No Duplicate element ");
	}
}
int main()
{
	int size,i;
	int arr[100];
	printf("How many Number enter by You ");
	scanf("%d",&size);
	printf("Entr number ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	dupicate(arr,size);
	
}

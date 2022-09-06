//8. Write a program to compute the sum of all elements in an array using pointers.



#include<stdio.h>
int sumofElement(int *p,int size);
int sumofElement(int *p,int size){
	int i,sum=0;
	for(i=0;i<size;i++){
	  sum = *(p+i) + sum;
	}
	return sum;
}
int main(){
	int arr[10];
	printf("Enter 10 Number ");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}

	printf("sum of all elements is %d",sumofElement(arr,10));
	   
	   
}
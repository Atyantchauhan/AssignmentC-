//2. Write a program to ask the user to input a number of data values he would like to
//enter then create an array dynamically to accommodate the data values. Now take
//the input from the user and display the average of data values.

#include<stdio.h>
#include<stdlib.h>
int main(){
	int size;
	int average=0;
	printf("Enter the size of arr : ");
	scanf("%d",&size);
	
	int *p = NULL;
	p = (int*)malloc(size*sizeof(int));
	

	for(int i=0;i<size;i++){
		scanf("%d",(p+i));
	   average += *(p+i);
	}
	free(p);
	printf("\nAverage is %d",average/size);
	return 0;
	
}
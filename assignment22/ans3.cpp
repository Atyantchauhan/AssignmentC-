//3. Write a program to calculate the sum of n numbers entered by the user using malloc
//and free.

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,sum=0;
	printf("Enter N number for sum : ");
	scanf("%d",&n);
	
	int *p = NULL;
	printf("\nEnter Number :");
	p = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
	    if(i!=0){
	    printf("              ");
		}
		scanf("%d",(p+i));
		sum += *(p+i);
	}
	free(p);
	printf("sum of n number is %d ",sum);
	return 0;
	
	
}
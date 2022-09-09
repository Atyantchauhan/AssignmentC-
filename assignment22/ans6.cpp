//6. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	int size;
	printf("Enter the size of arr : ");
	scanf("%d",&size);
	p = (int*)calloc(size,sizeof(int));
	int i,temp=0;
	for(i=0;i<size;i++){
		 scanf("%d",(p+i));
		 if(temp<*(p+i)){
		 	temp = *(p+i);
		 }
          
	}
      free(p);
	  printf("largest element is %d",temp);
	  
	 
	 return 0;
}
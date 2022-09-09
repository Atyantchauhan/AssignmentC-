//5. Write a program to read a one dimensional array, print sum of all elements along with
//inputted array elements using dynamic memory allocation.
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
          temp = temp + *(p+i);
          
	}
     for(i=0;i<size;i++){
     	if(i==0)
     	 printf("%d",*(p+i)); 
		 else
		  printf("+%d",*(p+i));  
	 }
	  printf("=%d",temp);
	  free(p);
	 
	 return 0;
}
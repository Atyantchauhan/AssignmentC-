//9. Write a program to allocate memory dynamically of the size in bytes entered by the
//user. Also handle the case when memory allocation is failed.

#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	int size;
	printf("Enter the size of arr : ");
	scanf("%d",&size);
	p = (int*)calloc(size,size);
	int i,temp=0;
	if(p==NULL){
		printf("Memory allocation failed");
	}else{
		for(i=0;i<size;i++){
		       scanf("%d",(p+i));
		     if(temp<*(p+i))
		        temp = *(p+i);
		        
			 }
}
		 	
      free(p);
	  printf("largest element is %d",temp);
	  
	 
	 return 0;
}
//10. Find out the maximum and minimum from an array using dynamic memory allocation
//in C
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	int size;
	printf("Enter the size of arr : ");
	scanf("%d",&size);
	p = (int*)calloc(size,sizeof(int));
	int i,temp=0,minimum=0;
	for(i=0;i<size;i++){
		 scanf("%d",(p+i));
		 if(temp<*(p+i)){
		 	temp = *(p+i);
		 }
		  if(i==0){
		  	minimum = *(p+i);
		  }
		 if(!(minimum < *(p+i))){
		 	minimum = *(p+i);
		 }
		 
          
	}
      free(p);
	  printf("maximum is %d",temp);
	  printf("\nminimum is %d",minimum);
	  
	 
	 return 0;
}
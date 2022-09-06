#include<stdio.h>
int maxValue(int*, int*);
int main(){
	int a,b;
	printf("Enter two number ");
	scanf("%d%d",&a,&b);
    int max =	maxValue(&a,&b);
	printf("the maximum value is %d",max);
	
	return 0;
}
// swapValue function 
int maxValue(int *p,int *q){
	if(*p>*q){
		return *p;
	}else{
	   return *q;
	}
	
}
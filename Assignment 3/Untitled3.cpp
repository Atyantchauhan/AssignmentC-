#include<stdio.h>
int main(){
   int num;
   int count = 0;
   printf("Enter a number ");
   scanf("%d",num);
   for(int i=0; i<num;i++){
   	num = num/10;
   	count++;
   }
   printf("%d",count);
	 
	return 0;
}


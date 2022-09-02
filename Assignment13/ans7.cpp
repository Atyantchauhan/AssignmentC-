#include<stdio.h>
int recurHcf(int num , int num2){
	int k,min,i=1,hcf=1;
	min = num < num2 ? num : num2;
     if(num2==0)
     return num;
      
      recurHcf(num2,num%num2);
}
int main(){
	int num,num2;
	printf("Enter a Numer ");
	scanf("%d%d",&num,&num2);
	int result = recurHcf(num,num2);
	printf("%d",result);
	return 0;
}

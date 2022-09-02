#include<stdio.h>
int power(int num,int num2){
   static	int k=1;
   if(num2>0){
     k = num * power(num,num2-1);
   }
   return k;
}
int main(){
	int num,num2;
	printf("Enter a Numer ");
	scanf("%d",&num);
	printf("Enter power ");
	scanf("%d",&num2);
	printf("%d",power(num,num2));
	return 0;
}

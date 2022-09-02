#include<stdio.h>
int countDigit(int num){ 
  static int count = 0;
   if(num>0){
   	  count++;
   	   countDigit(num/10);
   }
   return count;
}
int main(){
	int num;
	printf("Enter a Numer ");
	scanf("%d",&num);
	printf(" total digit is %d",countDigit(num));
	return 0;
}

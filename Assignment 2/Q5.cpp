#include<stdio.h>
int main(){
  int n,m,sum=0;
  printf("Enter a number ");
  scanf("%d",&n);
   while(n>0){
   	 m = n%10;
   	 sum += m;
   	 printf("%d",sum);
   	 n  = n/10;
   }
   printf("sum is %d",sum);
  return 0;
}


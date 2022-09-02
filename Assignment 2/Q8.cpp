#include<stdio.h>
int main(){
  int  x;
  printf("Enter a number \n");
  scanf("%d",&x);
  int result = x&1;
  if(result==1)
    printf("odd");
  else
    printf("Even");
  return 0;
}

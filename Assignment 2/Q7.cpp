#include<stdio.h>
int main(){
  int  x;
  int count = 0;
  
  printf("Enter a number \n");
  scanf("%d",&x);
  
  while(x > 0){
  	count++;
  	int result = x&1;
  	if(result == 1){
  		break;
	  }
	  x = x>>1;
  }
  printf("%d",count);
  return 0;
}


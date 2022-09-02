#include<stdio.h>
void primefun(int );
int main(){
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	primefun(num);
	return 0;
}
void primefun(int num){
	int i,j=2;
	int k;
    for(k=2;k<=num;k++){
      for(i=1;i<=num;i++){
	   for(j=2;j<=i;j++){
	   	if(i%j==0)
	   	break;
	   }
	   if(i==j){
	   	printf("%d ",i);
	   }
	}
	}
}

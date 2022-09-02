#include<stdio.h>
void Fibonacci(int num){
   static  int crnt =  1, prev = -1, nxt = 0;   
       printf("%d ",nxt);
       prev = crnt;
       crnt = nxt;
       nxt = prev + crnt;
   if(num>0){
   	 Fibonacci(num-1);
   }
}
int main(){
	int num;
	printf("Enter a Numer ");
	scanf("%d",&num);
	Fibonacci(num);
	return 0;
}

#include<stdio.h>
void natural(int);
int main(){
	int num,m;
	printf("Enter a Number ");
	scanf("%d",&num);
     natural(num);
   
}
void  natural (int num){
	  
	    if(1<=num){
	    	  printf("%d ",num*2-1);
	    	  natural(num-1);
		}
	
	
	
	
}

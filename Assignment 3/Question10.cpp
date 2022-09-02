#include<stdio.h>
int main(){
	int c,p,s;
	printf("Enter cost price and selling  price  ");
	scanf("%d%d",&c,&s);
	p=s-c;
	if(0<p)
	printf("profit = %d ",p);
	else
	printf("Loss = %d ",p);
	 
	return 0;
}


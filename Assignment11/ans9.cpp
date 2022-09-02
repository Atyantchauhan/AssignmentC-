#include<stdio.h>
void sq(int);
int main(){
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	sq(num);
}
void sq(int num){
	printf("square is %d",num*num);
}

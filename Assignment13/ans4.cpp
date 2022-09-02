#include<stdio.h>
int square(int num){
	int k=1;
	if(num>1){
		k = num * num + square(num-1);
		return k;
	}
}
int main(){
	int num;
	printf("Enter a Numer ");
	scanf("%d",&num);
	int result = square(num);
	printf("%d",result);
	return 0;
}

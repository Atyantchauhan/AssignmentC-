#include<stdio.h>
int sumdigit(int num){
	int k=1;
	if(num>0){
		int n = num%10;
		k = n + sumdigit(num/10);
		return k;
	}
}
int main(){
	int num;
	printf("Enter a Numer ");
	scanf("%d",&num);
	int result = sumdigit(num);
	printf("%d",result);
	return 0;
}

#include<stdio.h>
int sumdigit(int num){
	int k=1;
	if(num>1){
	
		k = num * sumdigit(num-1);
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

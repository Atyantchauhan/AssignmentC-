#include<stdio.h>
int main(){
	int num;
	int i;
	int flag = 0;
	printf("Enter a number ");
	scanf("%d",&num);
	if(num == 0 || num == 1){
		flag = 1;
	}
	for(i=2;i<num/2;i++){
		if(num%i==0){
			flag = 1;
			break;
		}
		
	}
	if(flag == 0)
	printf("Prime Number");
	else
	printf("Not prime Number");
	
	return 0;
}

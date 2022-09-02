#include<stdio.h>
int main(){
	int Num;
	printf("Enter a Number ");
	scanf("%d",&Num);
	
	if(Num%2==0 && Num%3==0){
		printf("Its Divisible By 2 and 3 ");
		}
	
	else{
		printf("Its not Divisible by 2 and 3");
	}
return 0;
}


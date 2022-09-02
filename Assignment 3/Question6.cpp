#include<stdio.h>
int main(){
	int num ,num2;
	printf("Enter a Number ");
	scanf("%d%d",&num,&num2);
	
    if(num == num2){
    	printf("Both are same");
	}
	else if(num>num2){
		printf("%d ",num);
	}
	else{
			printf("%d ",num2);	
	}
	return 0;
}


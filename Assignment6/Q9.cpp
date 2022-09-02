#include<stdio.h>
int main(){
	int num1,num2,i;
	printf("Enter a number ");
	scanf("%d%d",&num1,&num2);
	int max = (num1>num2) ? num1 : num2 ;
	for (i=1;i<=num1*num2;i++,max++){
		if(max%num1 == 0 && max%num2 == 0 ){
			break;
		}
	
	}

	printf("LCM is %d",max);
	return 0;
		
	}


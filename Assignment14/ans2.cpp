#include<stdio.h>
int main(){
	int i;
	int avgResult=0;
	int avg[10];
	printf("Enter 10 Numbr ");
	for(i=0;i<10;i++){
		scanf("%d",&avg[i]);
		avgResult = (avgResult + avg[i]);
		
		
	}
       	printf(" Average %d",avgResult/10);
       	
       	return 0;
	
}

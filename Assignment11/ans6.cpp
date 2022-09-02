#include<stdio.h>
void primefun(int ,int);
int main(){
	int num1,num2;
	printf("Enter a number ");
	scanf("%d%d",&num1,&num2);
	primefun(num1,num2);
	return 0;
}
void primefun(int num1,int num2){
    int i,j;
    for(i=num1;i<=num2;i++){
    	for(j=2;j<=num2;j++){
    		if(i%j==0){
    			break;
			}
		}
		if(i==j){
			printf("%d ",i);
		}
	}
}

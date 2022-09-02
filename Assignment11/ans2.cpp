#include<stdio.h>
int FactionHcf(int , int);
int main(){
	int num1,num2;
	printf("Enter two Number ");
	scanf("%d%d",&num1,&num2);
	printf("Hcf is %d",FactionHcf(num1,num2));
}
int FactionHcf(int a , int b){
	int i,hcf=1;
	int min = a<b? a : b;
	for(i=1;i<=min;i++){
		
			if(a%i==0 && b%i==0){
				hcf = i;
			
			}	
	}
	
	return hcf;

}



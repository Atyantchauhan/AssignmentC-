#include<stdio.h>
void factor(int);
int main(){
	int num;
	printf("Enter a Number ");
	scanf("%d",&num);
	factor(num);
     return 0;
}
 void factor(int num){
 	int i,j;
 	for(i=2;i<=num;i++){  
 		for(j=1;j<=num/2;j++){
 			if(num%i==0){
 				printf("%d",i);
 				num = num/i;
			 }
		 }
	 }
 }

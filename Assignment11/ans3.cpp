#include<stdio.h>
int Factionprime(int);
int main(){
	int num;
	printf("Enter  a Number ");
	scanf("%d",&num);
   if(Factionprime(num)==1){
   	printf("prime Number");
   }else{
   	printf("its not a prime number ");
   }
}
int Factionprime(int a){
	int i,j;
	
		
		for(j=2;j<=a;j++){
			if(a%j==0){
				break;
			}
		}
		if(j==a){
			return 1;
		}
		else{
			return 0;
		}
		
}
	




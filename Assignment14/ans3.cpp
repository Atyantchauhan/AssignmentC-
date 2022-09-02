#include<stdio.h>
int main(){
	int i;
	int ResultEven=0;
	int ResultOdd=0;
	int OddEven[10];
	printf("Enter 10 Numbr ");
	for(i=0;i<10;i++){
		scanf("%d",&OddEven[i]);
	      if(OddEven[i]%2==0){
	      	   ResultEven += OddEven[i];
		  }
		  else{
		  	ResultOdd += OddEven[i];
		  }
		
		
		
	}
       	printf(" EVen Sum %d\n",ResultEven);
       	printf(" Odd sum %d",ResultOdd);
       
       	
       	return 0;
	
}

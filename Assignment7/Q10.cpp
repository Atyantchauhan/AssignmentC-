#include<stdio.h>
int main(){
	int result,result2,result3,sum=0,i;
	
    for(i=1;i<=1000;i++){
    	 
		result = i%10;
		result2 = (i%100 - result)/10;
		result3  = (i%1000 - result2)/100;
		sum = (result*result*result) + (result2*result2*result2) + (result3*result3*result3);
		
		
	
    	if(i == sum){
		printf(" %d ",sum);
	}
      
	}
	
	return 0;
	
}

#include<stdio.h>
int series();
int main(){
	printf("%d",series());
}
int series(){
	int i,j,result5=1,result4=1,result3=1,result2=1,result1=1;
	for(i=1;i<=5;i++){
		result5 *= i;
	}
	for(i=1;i<=4;i++){
		result4 *= i;
	}
	for(i=1;i<=3;i++){
		result3 *= i;
	}
	for(i=1;i<=2;i++){
		result2 *= i;
	}

		result1 = 1 + (result2/2) + (result3/3) + (result4/4)  + (result5/5);
		return result1;
	
	
}


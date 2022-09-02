#include<stdio.h>
int main(){
	int i,sumarr=0;
	printf("Enter Number ");
	int sum[10];
	for(i=0;i<10;i++){
	  scanf("%d",&sum[i]);
	}
	for(i=0;i<10;i++){
	    sumarr += sum[i];
	}
	 printf("sum of arr is %d",sumarr);
	return 0;
}

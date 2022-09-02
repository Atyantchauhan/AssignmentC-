#include<stdio.h>
int main(){
	int i,j,valueStore,num;
	int reverseArr[100];
	printf("Enter size of arr ");
	scanf("%d",&num);
	printf("Enter number ");
	for(i=0;i<num;i++){
		scanf("%d",&reverseArr[i]);
	}
	for(i=0;i<num;num--){
	    printf("%d ",reverseArr[num-1]);
	}
	    
	
	
}

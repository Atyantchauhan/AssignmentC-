#include<stdio.h>
int main(){
	int i,j,valueStore;
	int shortArr[5];
	printf("Enter 10 number ");
	for(i=0;i<=4;i++){
		scanf("%d",&shortArr[i]);
	}
	for(i=0;i<=4;i++){
	
		for(j=i+1;j<=4;j++){
			if(shortArr[i] > shortArr[j]){
				valueStore = shortArr[i];
				shortArr[i] = shortArr[j];
				shortArr[j] = valueStore;
			}
		
		}
	}
	
		printf("%d ",shortArr[3]);
	
	
}

#include<stdio.h>
int main(){
	int i,j,valueStore;
	int shortArr[10];
	printf("Enter 10 number ");
	for(i=0;i<=9;i++){
		scanf("%d",&shortArr[i]);
	}
	for(i=0;i<=9;i++){
	
		for(j=i+1;j<=9;j++){
			if(shortArr[i] > shortArr[j]){
				valueStore = shortArr[i];
				shortArr[i] = shortArr[j];
				shortArr[j] = valueStore;
			}
		
		}
	}
	
		for(i=0;i<=9;i++){
		printf("%d ",shortArr[i]);
	}
	
}

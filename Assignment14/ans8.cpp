#include<stdio.h>
int main(){
	int i,j,valueStore,num;
	int shortArr[100];
	printf("Enter size of arr ");
	scanf("%d",&num);
	printf("Enter number ");
	for(i=0;i<num;i++){
		scanf("%d",&shortArr[i]);
	}
	for(i=0;i<num;i++){
	
		for(j=i+1;j<num;j++){
			if(shortArr[i] > shortArr[j]){
				valueStore = shortArr[i];
				shortArr[i] = shortArr[j];
				shortArr[j] = valueStore;
			}
		
		}
	}
	    int k = 1;
		printf("%d ",shortArr[k]);
	
	
}

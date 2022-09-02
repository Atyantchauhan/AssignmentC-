#include<stdio.h>
int smallestFunction(int smallestNumber[] , int num ){
	int i,temp,j;
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(smallestNumber[i] > smallestNumber[j]){
				temp = smallestNumber[i];
				smallestNumber[i] = smallestNumber[j];
				smallestNumber[j] = temp;
			}
		}
	}
	return smallestNumber[0];
}

int main(){
	int num,i;
	int smallestNumber[100];
	printf("Enter size of arr  Number ");
	scanf("%d",&num);
	printf("Enter the value of arr ");
	for(i=0;i<num;i++){
		scanf("%d",&smallestNumber[i]);
	}
	printf(" smallest Number %d",smallestFunction(smallestNumber,num));
}

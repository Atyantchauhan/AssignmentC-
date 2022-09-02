#include<stdio.h>
int greatestFunction(int greatestNumber[] , int num ){
	int i,temp,j;
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(greatestNumber[i] < greatestNumber[j]){
				temp = greatestNumber[i];
				greatestNumber[i] = greatestNumber[j];
				greatestNumber[j] = temp;
			}
		}
	}
	return greatestNumber[0];
}

int main(){
	int num,i;
	int greatestNumber[100];
	printf("Enter size of arr  Number ");
	scanf("%d",&num);
	printf("Enter the value of arr ");
	for(i=0;i<num;i++){
		scanf("%d",&greatestNumber[i]);
	}
	printf(" Greatest Number %d",greatestFunction(greatestNumber,num));
}

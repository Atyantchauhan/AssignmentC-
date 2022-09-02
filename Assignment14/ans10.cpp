#include<stdio.h>
int main(){
	int i,j,valueStore,num;
	int firstArr[100];
	int copyArr[100];
	printf("Enter size of arr ");
	scanf("%d",&num);
	printf("Enter number ");
	for(i=0;i<num;i++){                    
		scanf("%d",&firstArr[i]);           // take vlue from user
		copyArr[i] = firstArr[i];          // copy value
	}	
	
	for(i=0;i<num;i++){              // print arr 	
          printf("%d ",copyArr[i]);
    }
}

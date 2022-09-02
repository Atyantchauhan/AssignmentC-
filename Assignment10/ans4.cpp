#include<stdio.h>
void Natural(int);
int main(){
	int num; 
	 printf("Enter a Number ");
	 scanf("%d",&num);
    Natural(num);
    return 0;
}
void Natural(int n){
	int i;
	for(i=1;i<=n;i++){
		printf("  %d",i);
	}
}

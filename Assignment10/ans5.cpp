#include<stdio.h>
void oddNatural(int);
int main(){
	int num; 
	 printf("Enter a Number ");
	 scanf("%d",&num);
    oddNatural(num);
    return 0;
}
void oddNatural(int n){
	int i;
	for(i=1;i<=n;i++){
		printf("  %d",i*2-1);
	}
}

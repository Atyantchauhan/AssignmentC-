#include<stdio.h>
void binaryprint(int);
int main(){
	int num,k;
	printf("Enter a Number ");
	scanf("%d",&num);
	 binaryprint(num);

}
void binaryprint(int num){
	if(num>1){
			binaryprint(num/2);
	}

	  printf("%d",num&1);
}

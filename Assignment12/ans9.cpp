#include<stdio.h>
void octalprint(int);
int main(){
	int num,k;
	printf("Enter a Number ");
	scanf("%d",&num);
	 octalprint(num);

}
void octalprint(int num){
	if(num>8){
			octalprint(num/8);
	}

	  printf("%d",num%8);
}

#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter tringle side ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c){
		if(b+c>a){
			if(c+a>b){
				printf("triangle is Valid");
			}
		    else{
				printf(" Triangle Not valid");
			}
		}
		else{
			printf("Triangle Not Valid.");
		}
	}
	else{
		printf(" Tringle Not valid...");
	}
}


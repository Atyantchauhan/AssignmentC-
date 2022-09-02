#include<stdio.h>
int main(){
	int x;
	printf("Enter a number ");
	scanf("%d",&x);
	if(100<=x && 999>=x)
		printf("YES");
    else
        printf("NO");
}


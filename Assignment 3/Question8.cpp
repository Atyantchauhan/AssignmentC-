#include<stdio.h>
int main(){
	int num , year;
	printf("Enter Year ");
	scanf("%d",&year);
    num = year%4 ;
    if(num==0)
    printf("Leap year ");
    else
    printf(" not Leap year ");
    
    return 0;
}


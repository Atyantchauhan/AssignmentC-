#include<stdio.h>
int main(){
    int digit ;
    printf("Enter three digit number..\n");
    scanf("%d",&digit);
    int result = digit/10;                                                            
    int result1 = digit%10;
    result1 *= 100;
    result1  +=  result;
    printf("Rotate value is %d",result1);
	return 0;
}

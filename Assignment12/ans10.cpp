#include<stdio.h>
void reverse(int num){
	if(num>0){   
      if(num<=9)
        printf("%d",num); 
     else 
      printf("%d",num%10);
   reverse(num/10);

}

}
int main(){
	int num;
	printf("Enter a Number ");
	scanf("%d",&num);
	reverse(num);
}

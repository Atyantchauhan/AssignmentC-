#include<stdio.h>
int Nextprime(int);
int main(){
	int num;
	printf("Enter  a Number ");
    scanf("%d",&num);
    printf("%d",Nextprime(num));
    return 0;
   
}
int Nextprime(int a){
	int i,j;
	
    for(i=a+1;1;i++){
    	for(j=2;j<=i;j++){
    		if(i%j==0){
    			break;
			}
		}
		if(j==i){
			return j;
		}
	}

	
		
}
	




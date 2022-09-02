#include<stdio.h>
int main(){
	int i,j;

    char ch1 = 'A';
   	char ch2 = 'B';
    char ch3 = 'C';
    char ch4 = 'D';
    char ch5 = 'C';
    char ch6 = 'B';
    char ch7 = 'A';

    
	for(i=1;i<=4;i++){
		for(j=1;j<=7;j++){
			if(i<=j && j<=8-i){
				if(j==1 ){
					printf("%c",ch1);
				   ch1++;
				}
				if(j==2 ){
					printf("%c",ch2);
				   ch2--;
				}
				if(j==3 ){
					printf("%c",ch3);
				   ch3--;
				}
				if(j==4 ){
					printf("%c",ch4);
				   ch4--;
				}
				
				if(j==5){
					printf("%c",ch5);
					ch5--;
				}
			
					if(j==6  ){
					printf("%c",ch6);
					ch6--;
				}
				
					if(j==7 ){
					printf("%c",ch7);
					ch7--;
				}
				
				
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

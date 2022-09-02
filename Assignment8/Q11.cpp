#include<stdio.h>
int main(){
	int i,j;
	char ch = 'A';
    char ch1 = 'A';
    char ch2 = 'A';
     char ch3 = 'A';
    char ch4 = 'A';
    char ch5 = 'A';
    char ch6 = 'A';
    char ch7 = 'A';
    char ch8 = 'A';
	for(i=1;i<=5;i++){
		for(j=1;j<=9;j++){
			if(j>=6-i && j<=4+i){
				if(j==5){
					printf("%c",ch);
					ch++;
				}
				if(j==4 ){
					printf("%c",ch1);
				   ch1++;
				}
					if(j==6  ){
					printf("%c",ch2);
					ch2++;
				}
					if(j==3 ){
					printf("%c",ch3);
				   ch3++;
				}
					if(j==7 ){
					printf("%c",ch4);
					ch4++;
				}
						if(j==2 ){
					printf("%c",ch5);
				   ch5++;
				}
					if(j==8 ){
					printf("%c",ch6);
					ch6++;
				}
							if(j==1 ){
					printf("%c",ch7);
				   ch7++;
				}
					if(j==9 ){
					printf("%c",ch8);
					ch8++;
				}
				
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

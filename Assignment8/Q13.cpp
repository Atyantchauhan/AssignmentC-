#include<stdio.h>
int main(){
	int i,j;

    char ch1 = 'A';
   	char ch2 = 'B';
    char ch3 = 'C';
    char ch4 = 'D';
    char ch5 = 'E';
    char ch6 = 'F';
    char ch7 = 'G';

    
	for(i=1;i<=7;i++){
		for(j=1;j<=13;j++){
	     if(j<=8-i || j>=6+i ){
	     	if(j==1 || j==13){
	     		printf("%c",ch1);
			 }
			 if(j==2 || j==12){
	     		printf("%c",ch2);
			 }
			 if(j==3 || j==11){
	     		printf("%c",ch3);
			 }
			 if(j== 4 || j==10){
	     		printf("%c",ch4);
			 }
			 if(j== 5 || j==9){
	     		printf("%c",ch5);
			 }
			  if(j== 6 || j==8){
	     		printf("%c",ch6);
			 }
			  if(j== 7){
	     		printf("%c",ch7);
			 }
			}else{
				printf(" ");
			}
		 }
		 	printf("\n");
		}
	
	}

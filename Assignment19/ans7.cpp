#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int count=0;
	char ip[]="123.0.5.255";
	char *a = strtok(ip,".");
	
	while(a!= NULL){
		int m = atoi(a);
		if(m>=0 && m<=255){
			count++;
		}
	    a = strtok(NULL,".");
	}
	
	if(count==4){
		printf("valid Ip ");
	}else{
		printf("Invalid Ip ");
	}
	return 0;
}

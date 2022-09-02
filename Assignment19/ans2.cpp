#include<stdio.h>
#include<string.h>
int main(){
	char str[10][20];
	printf("Enter 10 city name ");
	int i,j;
	char temp[20];
	char str1[20]={0};
	for(i=0;i<10;i++){
		gets(str[i]);
	}
    
    for(i=0;i<10;i++){
    	for(j=i+1;j<10;j++){
    		if(strcmp(str[i],str[j])>0){
    		    strcpy(temp,str[i]);
    		    strcpy(str[i],str[j]);
    		    strcpy(str[j],temp);
				 	
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%s ",str[i]);
	}
}

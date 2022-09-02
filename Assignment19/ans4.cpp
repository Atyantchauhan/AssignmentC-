//4. Write a program to search a string in the list of strings.

#include<stdio.h>
#include<string.h>
int main(){
	char str[10][20];
	printf("Enter 10 city name \n");
	int i,j;
	char temp[10];
	char str1[20]={0};
	for(i=0;i<5;i++){
		printf("%d. ",i+1);
		gets(str[i]);
	
	}
	printf("\nEnter string for search : ");
	gets(temp);
    
    for(i=0;i<5;i++){
    		if(strcmp(str[i],temp)==0){
    		   printf("\nfind string :  %s\n\nposition is :  %d \n", str[i],i+1);
				 	break;
			}
		
	}
	return 0;
}

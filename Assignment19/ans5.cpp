//5. Suppose we have a list of email addresses, check whether all email addresses have 
//‘@’ in it. Print the odd email out




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
	
    for(i=0;i<5;i++){
    		if(strchr(str[i],'@')==0){
    		   printf("\n string %d :  %s\n\nnot find '@' \n",i+1, str[i]);
	
			}
		
	}
 

	return 0;
}

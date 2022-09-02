//10. Write a function to find the repeated character in a given string.


#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char str[100];
	printf("Enter a string ");
	scanf("%s",&str);
	int count = 1;
	
	int len = strlen(str);
	//  repeated character
	
	for(i=0;i<len;i++){
		count = 1;
		if(str[i]!=-1){
			for(j=i+1;j<len;j++){
			if(str[i] == str[j]){
				count++;
				str[j] =-1;
			}
		}
		}
	if(str[i]!=-1){
			if(count>1){
			printf(" %c repeated character is %d\n ",str[i],count);
		}
	}
	}
	
	return 0;
	
	
}

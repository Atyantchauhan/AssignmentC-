
//Write a function to check whether a given string is an alphanumeric string or not.



#include<stdio.h>
#include<string.h>

int alphanumeric(char str[]){
	int flag = 0;
	int flag1 = 0,i;
	
		for(i=0;str[i];i++){
		if(str[i]>='a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'  ){
	     flag = 1;
	}
	if(str[i] >= 48 && str[i] <= 57){
		flag1= 1;
	}
	
		
	}
	if(flag == 1 && flag1 == 1){
		 return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char str[100];
	int i;
	printf("Enter string ");
	fgets(str,100,stdin);
	
	if(alphanumeric(str)){
		printf("alphanumeric string ");
	}else{
		printf("alphanumeric Not string ");
	}
	

	return 0;
}

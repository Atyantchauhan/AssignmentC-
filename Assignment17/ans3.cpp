#include<stdio.h>
int main(){
	char str[100] = "AtyantKumar";
	int i;
	
	
	
	int count=0;
	for(i=0;str[i];i++){
		if(str[i]== 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i]== 'I' || str[i] == 'o'|| str[i] == 'o' || str[i] == 'u' || str[i] == 'U' ){
			count++;
		}
	}
	printf("%d",count);
}

//8. Write a function to count words in a given string

#include<stdio.h>
int countWord(char str[]){
	int i,count=1;
	for(i=0;str[i];i++){
		if(str[i]==32 && str[i+1]!=32){
			count++;	
		}	
	}

		if(i>0){
			return count;
		}else{
			return 0;
		}
	
}
int main(){
	char str[100];
	printf("Enter string ");
	fgets(str,100,stdin);
		printf("%d",countWord(str));
	

}

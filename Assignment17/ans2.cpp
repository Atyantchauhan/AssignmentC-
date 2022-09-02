#include<stdio.h>
int main(){
	char str[100] = "AtyantKumar";
	int i,j;
	char c = 'A';
	int count=0;
	for(i=0;str[i];i++){
		if(str[i]==c){
			count++;
		}
	}
	printf("%d",count);
}

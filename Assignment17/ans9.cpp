#include<stdio.h>
#include<string.h>
int main(){
	char str[100] = "abcdA";
	int i,j;
	char temp;
	int l = strlen(str);
	for(i=0;i<l;i++){
		for(j=i+1;j<l;j++){
			if(str[i]>str[j]){
				temp = str[i];
				str[i]= str[j];
				str[j] = temp;
			}
		}
	}
	printf("%s",str);
}

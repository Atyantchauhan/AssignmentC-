//8. Write a program in C to copy one string to another string.

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str[100] = "Atyant";
//	char str1[100];
//	printf("%s",strcpy(str1,str));
//	return 0;
//}


//        ++++++++++++++++++++++++++++++++++++++++++++++ other +++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char str1[100];
	printf("Enter string ");
	fgets(str,20,stdin);
	int i,j;
	int l = strlen(str);
	
	for(i=0;i<l;i++){
		str1[i] = str[i];
	}
	
	for(i=0;str1[i];i++){
		printf("%c",str1[i]);
	}
}

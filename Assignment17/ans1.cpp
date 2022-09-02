//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str[100];
//	int i;
//	int count =0;
//	
//	printf("Enter Your Name ");
//		fgets(str,100,stdin);
//	for(i=0;str[i];i++){
//		count++;
//	}
//	
//  printf("%d",count-1);
//}

#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("Enter Your Name ");
	fgets(a,10,stdin);
	int i=0;
	int count = 0;
	while(a[i]!='\0' && a[i]!= '\n'){
		count++;
		i++;
	}
	printf("%d",count);
}

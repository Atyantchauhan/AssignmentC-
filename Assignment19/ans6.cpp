#include<stdio.h>
#include<string.h>
int main(){
	char str[3][10];
	printf("Enter string ");
	int i,j=1,flag,count=0,l;
	for(i=0;i<3;i++){
		gets(str[i]);
	}
	
	
	
	// logic
	
	for(i=0;i<3;i++){
		l=strlen(str[i])-1;
		printf("%d ",l);
		for(j=0;j<=(l/2);j++){  // 
			if(str[i][j]!= str[i][l-j]){
			  break;
			}
		}
	
		if(j-1==(l/2)){
			printf("%s is palindrom\n",str[i]);
		}else{
			printf("%s is Not palindrom\n",str[i]);
		}
	
	}
    
    return 0;

}

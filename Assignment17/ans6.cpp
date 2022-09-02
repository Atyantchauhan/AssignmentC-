//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str[100];
//	printf("Enter the string ");
//	fgets(str,100,stdin);
//	int i,j;
//	int len = strlen(str);
//	for(i=len;i>=0;i--){
//		printf("%c",str[i]);
//		
//	}
//	
//}


//============================================NExt Logic===============================
    
    
    
    #include<stdio.h>
    #include<string.h>

	int main(){
	char str[11];
	printf("Enter the string ");
	fgets(str,10,stdin);
	int l= strlen(str)-1;
	int i=0,j=l;
	char temp;
	while(i<=j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf(" %s",str);
	}

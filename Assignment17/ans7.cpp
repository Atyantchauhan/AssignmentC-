#include<stdio.h>
#include<string.h>
int main(){
	char str[] = "AaTYANT*)())((_+))99999";
	int i;
	int alphabets = 0;
	int special = 0;
	int digits = 0;
     
     for(i=0;str[i];i++){
        if(str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122 ){
        	alphabets++;
		}
		if(str[i] >= 33 &&  str[i] <= 47 ){
			special++;
		}
		if(str[i] >= 48 &&  str[i] <= 57){
			digits++;
		}
	 }
	 printf("\nalphabates is %d ",alphabets);
	 printf("\nspecial characters is %d ",special);
	 printf("\ndigits is %d ",digits);
     
	return 0;
}

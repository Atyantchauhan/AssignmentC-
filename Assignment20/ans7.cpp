
//7. Write a program to count the number of vowels and consonants in a string using a
//pointer.

#include<stdio.h>
void vowelconsonants(char *p);
void vowelconsonants(char *p){
	int i,vowels=0,consonants=0;
	for(i=0;*(p+i);i++){
	 if(*(p+i)>=65 && *(p+i)<=90 || *(p+i)>=97 && *(p+i)<=122){
	 		if(*(p+i) =='a'||*(p+i) =='e'||*(p+i) =='i'||*(p+i) =='o'||*(p+i) =='u'||*(p+i) =='A'||*(p+i) =='E'||*(p+i) =='I'||*(p+i) =='O'||*(p+i) =='U'){
			vowels++;
		}
		else{
			consonants++;
		}
	 }
	}
	printf("vowels is %d\n",vowels);
	printf("consonants is %d",consonants);
}
int main(){
	char str[20];
	printf("Enter Your Name ");
	gets(str);
	int vowels=0;
	int consonants=0;
	vowelconsonants(str);
	   
	   
}
//9. Write a function to reverse a string word wise. (For example if the given string is 
//“Mysirg Education Services” then the resulting string should be “Services Education 
//Mysirg” )


#include<stdio.h>
#include<string.h>
void swap(char str[],int i,int j){
	char temp;
	while(i<=j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
int main(){
  char str[200]=" my name is Atyant";
  int i=0,start=0,end=0,flag=0;
  
  while(str[i] !='\0'){
  	
  	while(str[i]!= ' '){
  		if(str[i] == '\0'){
  			flag = 1; 
  			break;
		  }
		  end++;
		  i++;
	  }
	  swap(str,start,end-1);
	  if(flag==1){
	  	break;
	  }
	   start = end++;
	   i++;
  
  }
  swap(str,0,i-2);
  printf("%s",str);
  printf("\nHEllo world");
  
}
  
  
  
  
  
  
  
  
  
  
  
    
   


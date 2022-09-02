//8. Given a list of words followed by two words, the task is to find the minimum distance 
//between the given two words in the list of words.
//(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 2 )


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[5][10] = {"my","name","kumar","is","atyant"};
	char str1[]   = "atyant";
	char  str2[] = "my";
	int i,w1=-1,w2=-1,temp,min=10000;
	
	for(i=0;i<5;i++){
		if(strcmp(str[i],str1)==0){
			w1 = i;
		}
		if(strcmp(str[i],str2)==0){
			w2 = i;
		}
		if(w1 != -1 && w2 != -1){
			temp = abs(w2-w1);
			if(temp<min){
				min = temp;
			}
		}
	}
	printf("%d",min-1);
	
	return 0;
}

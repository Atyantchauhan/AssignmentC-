//10. Create an authentication system. It should be menu driven.

#include<stdio.h>
#include<string.h>
int main(){
	int userFlag=0,passFlag=0,userCount=-1;
	char user[4][20]={"atyabt123","abhishek9045","naresh000","kamladevi890"};
	
	char pass[4][20] ={"atyabt123@","abhishek9045@","naresh000@","kamladevi890@"};
	char userLogin[20];
	char userPass[20];
	printf("Enter User Name ");
	gets(userLogin);
	printf("Enter Your password ");
	gets(userPass);
	
	for(int i=0;i<4;i++){
		if(strcmp(user[i],userLogin)==0){
			userFlag = 1;
            userCount = i;
		}
		if(strcmp(pass[i],userPass)==0){
		    passFlag =1;

		}
	}
	
	if(userFlag==1 && passFlag ==1){
		printf("Hii.....Wellcome Back %s" ,user[userCount]);
	}else{
		printf("please Enter valid userId and password");
	}
}

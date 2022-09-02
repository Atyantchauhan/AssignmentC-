//9. Write a program that asks the user to enter a username. If the username entered is 
//one of the names in the list then the user is allowed to calculate the factorial of a 
//number. Otherwise, an error message is displayed

#include<stdio.h>
#include<string.h>
int main(){
	int num,result=1,i,j,flag=0;
 char user[4][20] = {"atyabt123","abhishek9045","naresh000","kamladevi890"};
 char  userLogin[20];
 printf("Enter  User Name ");
 gets(userLogin);

 
for(i=0;i<4;i++){
	if(strcmp(user[i],userLogin)==0){
	    printf("\nEnter a Number for calculate the factorial ");
        scanf("%d",&num);
	    for(j=1;j<=num;j++){
			result = j * result;
		}
		printf("The factorial is %d",result);
		flag=1;
		break; 
    }
       
	}
	
	if(flag!=1){
	  printf("Invalid User Name ");
	}
 
}

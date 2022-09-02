#include<stdio.h>
int main(){
	int num=0;
	char ch;
	printf("You want to change poaitive to negative y/n ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'y':
			printf("Enter Number ");
			scanf("%d",&num);
			
			printf("%d",num*(-1));
              break;
        case 'n':
        	printf("Thank You");
	}
	
}

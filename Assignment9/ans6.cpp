#include<stdio.h>
int main(){
	int year;
	char check;

	printf("You want check Leap year y/n  ");
	scanf("%c",&check);
	switch(check){
		case 'y':
			printf("Enter Year ");
	        scanf("%d",&year);
			if(year%4==0){
				printf("\nIt is a leap Year");
			}else{
				printf("\nIt's not a leap Year");
			}
			break;
		case 'n':
			printf("Thanks You");
			break;
	}
}

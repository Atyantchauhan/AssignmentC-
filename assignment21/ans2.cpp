//2. Write a function to take input employee data from the user. [ Refer structure from
//question 1 ]


#include<stdio.h>
#include<string.h>

struct Employee{
	int id;
	char name[20];
	int salary;
};
int main(){
	struct Employee b1;
	printf("Enter employee id ");
	scanf("%d",&b1.id);
	fflush(stdin);
	printf("Enter name of employee ");
	fgets(b1.name,20,stdin);
	b1.name[strlen(b1.name)-1] = '\0'; // for handle \n 
	printf("Enter salary of employee ");
	scanf("%f",&b1.salary);
	return 0;
}
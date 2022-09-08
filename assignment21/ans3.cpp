//3. Write a function to display employee data. [ Refer structure from question 1 ]

#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	char name[20];
	int salary;
};
struct Employee input(){
	struct Employee b1;
	printf("Enter employee id ");
	scanf("%d",&b1.id);
	fflush(stdin);
	printf("Enter name of employee ");
	fgets(b1.name,20,stdin);
	b1.name[strlen(b1.name)-1] = '\0'; // for handle \n 
	printf("Enter salary of employee ");
	scanf("%d",&b1.salary);
	return b1;
}
void display(struct Employee b1 ){
	printf("id ==>%d\nName==>%s\nsalary==>%d",b1.id,b1.name,b1.salary);
}
int main(){
	struct Employee b1  = input();
	display(b1);
	return 0;
}
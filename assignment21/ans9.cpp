//9. Write a program to store information of n students and display them using structure


#include<stdio.h>
#include<string.h>

struct student{
	int rollno;
	char name[20];
	int className;
};
// get  input function
struct student input(){
	struct student temp;
	printf("Enter student rollno. : ");
	scanf("%d",&temp.rollno);
	fflush(stdin);
	printf("Enter student Name : ");
	fgets(temp.name,20,stdin);
	temp.name[strlen(temp.name)-1] = '\0';
	printf("Enter student class  : ");
	scanf("%d",&temp.className);
	return temp;
	
}

void studentdetails(int n){
		
	struct student studentInformation[n];
	int i;
	// get  input 
	for(i=0;i<n;i++){
		printf("Enter deatils of student %d \n",i+1);
		studentInformation[i] = input();
		printf("\n");
	}
	
	// display 
	printf("Here the all information of student : \n\n");
	for(i=0;i<n;i++){
	printf("student rollno. : %d\nstudent Name :%s\nstudent class : %d\n",studentInformation[i].rollno,studentInformation[i].name,studentInformation[i].className);
	printf("\n");
	}
}

int main(){
	int n;
	printf("How many student information You have ! please Enter ");
	scanf("%d",&n);
	studentdetails(n);
}
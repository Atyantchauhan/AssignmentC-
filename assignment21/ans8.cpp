//6. Write a function to sort employees according to their names [refer structure from
//question 1]

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

void studentdetails(){
		
	struct student studentInformation[5];
	int i;
	// get  input 
	for(i=0;i<5;i++){
		printf("Enter deatils of student %d \n",i+1);
		studentInformation[i] = input();
		printf("\n");
	}
	
	// display 
	printf("Here the all information of student : \n\n");
	for(i=0;i<5;i++){
	printf("student rollno. : %d\nstudent Name :%s\nstudent class : %d\n",studentInformation[i].rollno,studentInformation[i].name,studentInformation[i].className);
	printf("\n");
	}
}

int main(){
	studentdetails();
}
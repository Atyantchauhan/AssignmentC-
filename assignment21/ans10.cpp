//10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//Physics (each out of 100) using a structure named Marks having elements roll no.,
//name, chem_marks, maths_marks and phy_marks and then display the percentage
//of each student.





#include<stdio.h>
#include<string.h>

struct student{
	int rollno;
	char name[20];
	int chem_marks,maths_marks,phy_marks;
	float percentage;
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
	printf("Enter  chem_marks : ");
	scanf("%d",&temp.chem_marks);
	printf("Enter maths_marks : ");
	scanf("%d",&temp.maths_marks);
	printf("Enter phy_marks : ");
	scanf("%d",&temp.phy_marks);
	
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
	// logic 
	printf("Here the all information of student : \n\n");
	for(i=0;i<n;i++){
	 studentInformation[i].percentage =	100*(studentInformation[i].chem_marks + studentInformation[i].maths_marks + studentInformation[i].phy_marks)/210;
	}
	// display information
	
	for(i=0;i<n;i++){
		 printf("student rollno. : %d\nstudent Name :%s\nstudent percentage : %f\n",studentInformation[i].rollno,studentInformation[i].name,studentInformation[i].percentage);
	 printf("\n");
	}
}

int main(){
	int n;
	printf("How many student information You have ! please Enter ");
	scanf("%d",&n);
	studentdetails(n);
}
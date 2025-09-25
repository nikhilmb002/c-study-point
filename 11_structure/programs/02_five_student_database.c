/* c program to store five student database, informations are roll number of the student, name of the student and total marks of the student */

#include<stdio.h>

	struct student{
	
		int roll_no;

		char name[20];

		float marks;	
	} v[5];

	

int main(void){
	
	int i;

	for(i = 0; i < 5; i++){
		
		printf("Enter the roll_no : ");

		scanf("%d", &v[i].roll_no);

		printf("\nEnter the name    : ");

		scanf("%s", v[i].name);

		printf("\nEnter the marks   : ");

		scanf("%f", &v[i].marks);

		printf("\n");
	}

	printf("\n");

	for(i = 0; i < 5; i++)

		printf("\n%3d	%25s	%2.2f\n", v[i].roll_no, v[i].name, v[i].marks);
	
	return 0;
}

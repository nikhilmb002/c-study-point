/* c program to store one student database, informations are roll number of the student, name of the student and total marks of the student */

#include<stdio.h>

	struct student{
	
		int roll_no;

		char name[20];

		float t_marks;
	};

	int main(void){
	
		struct student v;

		printf("Enter the roll number : ");

		scanf("%d", &v.roll_no);

		printf("\nEnter the name        : ");

		scanf(" %s", v.name);

		printf("\nEnter the total marks : ");

		scanf("%f", &v.t_marks);	

		printf("\n%d  %10s  %2.2f\n", v.roll_no, v.name, v.t_marks);	

		return 0;
	}

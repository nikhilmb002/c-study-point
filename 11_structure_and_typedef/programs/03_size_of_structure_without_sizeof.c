/* write a c program to find size of a structure without using sizeof() operator */

#include<stdio.h>

struct student {

	int rollno;
	
	char name[10];
};

int main(void){

	struct student new;

	struct student *p1, *p2;

	p1 = &new;

	p2 = p1 + 1;

	int s = (char *)p2 - (char *)p1;

	printf("\nsize = %d\n", s);

	printf("\n");

	return 0;
}

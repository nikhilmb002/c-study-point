#include<stdio.h>

#include<string.h>

struct student{

	int roll_no;

	char name[20];

	float marks;
};

int main(void){

	struct student v = {10, "abcd", 45.5}, *p;

	p = &v;

	p -> roll_no = 30;

	printf("%d  %s  %f\n", p -> roll_no, p -> name, p -> marks);
	
	
}

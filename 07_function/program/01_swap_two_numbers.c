/* Design a function for swapping of 2 numbers */

#include<stdio.h>

void swap(int *, int *);

int main(){

	int a, b;

	printf("\nEnter num1 : ");
	
	scanf("%d", &a);

	printf("\nEnter num2 : ");

	scanf("%d", &b);

	printf("\nBefore swap num1 = %d  num2 = %d \n", a, b);

	swap(&a, &b);

	printf("\nAfter  swap num1 = %d  num2 = %d \n", a, b);

	return 0;
}

void swap(int *p, int *q){

	int t = *p;

	*p = *q;

	*q = t;
}

/* c program to calculate simple interst */


#include<stdio.h>

int main(void){

	float p, r, t, si;

	printf("Enter the principal amount : ");

	scanf("%f", &p);

	printf("\nEnter the rate of interest in percentage :  ");

	scanf("%f", &r);

	printf("\nEnter the time in years : ");

	scanf("%f", &t);

	si = (p * r * t) / 100;

	printf("\nSimple interest = %.3f\n", si);

	return 0;

}

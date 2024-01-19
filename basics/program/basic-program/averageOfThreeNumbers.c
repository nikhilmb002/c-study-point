/* c program to find average of three numbers */

#include<stdio.h>

int main(void){

	float num1, num2, num3, avg;

	printf("Enter the first number  : ");

	scanf("%f", &num1);

	printf("\nEnter the second number : ");

	scanf("%f", &num2);

	printf("\nEnter the third number  : ");

	scanf("%f", &num3);

	avg = (num1 + num2 + num3) / 3;

	printf("\nAverage = %f\n", avg); 

	return 0;
}

/* c program to calculate area of a circle */

#include<stdio.h>

int main(void){

	float r, area;

	printf("Enter the radius of the circle : ");

	scanf("%f", &r);

	area = 3.1415 * r * r;

	printf("\nArea = %f\n", area);

	return 0;

}

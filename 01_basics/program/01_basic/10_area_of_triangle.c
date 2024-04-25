/* c program to calculate the area of a rectangle */

#include<stdio.h>

int main(void){

	float l, w, area;

	printf("Enter the length of the rectangle : ");

	scanf("%f", &l);

	printf("\nEnter the width of the rectangle  : ");

	scanf("%f", &w);

	area = l * w;

	printf("\nArea = %f\n", area);

	return 0;

}

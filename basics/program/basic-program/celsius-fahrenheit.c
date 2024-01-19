/* c program to convert temperature from celsius to fahrenheit */


#include<stdio.h>

int main(void){

	float c, f;

	printf("Enter temperature in celsius : ");

	scanf("%f", &c);

	f = (c * 9 / 5) + 32;

	printf("\nTemperature in fahrenheit = %f\n", f);
	
	return 0;
}

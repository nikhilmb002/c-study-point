/* write a c program to find sum of even digit of given number. check digit is even or not, using bitwise 
 
Ex : i.p : 7722494	o/p : 12 

*/

#include<stdio.h>

int main(void){

	int num, rem, sum = 0;
	
	printf("\nEnter the number : ");

	scanf("%d", &num);

	while(num){
	
		rem = num % 10;

		if((rem & 1) == 0)

			sum += rem;

		num /= 10;	
	}

	printf("\n%d\n", sum);

	return 0;
}

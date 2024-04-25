/* write a c program to find number is divisible by 8 or not. using bitwise operator + ternary operator 
 
Eg : input is 40 ouput : Yes

Eg : input is 60 ouput : No

*/

#include<stdio.h>

int main(void){

	int num;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	num & 7 ? printf("\nNo\n") : printf("Yes\n");

	return 0;

}

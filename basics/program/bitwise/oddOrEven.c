/* c program to check the number given number is even or odd using bitwise operator*/

#include<stdio.h>

int main(void){

        int num; 

	printf("Enter the number : ");

	scanf("%d", &num);

	num & 1 ? printf("\n%d is odd\n", num) : printf("\n%d is even\n", num);
	
	return 0;
}

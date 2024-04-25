/* write a c program to delete second digit
 
input : 345 then output : 35    */


#include<stdio.h>

int main(void){
	
	int num, first, last;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	last = num % 10;

	first = num / 100;

	num = first * 10 + last;

	printf("\n%d\n", num);	
}

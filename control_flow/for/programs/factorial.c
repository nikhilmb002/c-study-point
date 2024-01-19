/* c program to find the factorial of a given number */

#include<stdio.h>

int main(void){

	int num, i, fact = 1;

	printf("Enter the number : ");

	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
	
		fact = fact * i;
	
	}	

	printf("\nfactorial of %d = %d\n", num, fact);

	return 0;
}

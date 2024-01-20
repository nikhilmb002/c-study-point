/* c program to find factorial of a number using pointer */


#include<stdio.h>

int main(void){

	int num, fact = 1, *ptr;

	printf("Enter the number : ");

	scanf("%d", &num);

	printf("\nfactorial of %d = ", num);

	ptr = &num;

	while(*ptr > 0){
	
		fact *= *ptr;
		
		(*ptr)--;	
	
	}

	printf("%d\n", fact);

	return 0;
	
}

/* c program to check the number is palindrome or not */

#include<stdio.h>

int main(void){

	int num, rev = 0, temp;

	printf("Enter the number : ");

	scanf("%d", &num);

	temp = num;

	for(num; num != 0; num /= 10){
	
		rev = (rev * 10) + num % 10;	
	}
	
	if(temp == rev)

		printf("\n%d is palindrome\n", temp);

	else
		
		printf("\n%d is not palindrome\n", temp);

	return 0;
}

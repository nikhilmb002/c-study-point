/* write a c program to set all bit of 1st nibble, clear all bit of second nibble, toggle all bit of third nibble 

Ex : input : 0xF5F0 (unsigned short int)

it's binary : 1111 0101 1111 0000

o/p binary  : 1111 1010 0000 1111

*/

#include<stdio.h>

int main(void){
	
	unsigned short int num;

	int i;

	printf("Enter the number : ");

	scanf("%hx", &num);

	printf("\nit's binary  : ");

	for(i = 15; i >= 0; i--)

		printf("%d", num >> i & 1);

	printf("\no/p binary   : ");

	for(i = 0; i <= 15; i++){
	
		if( i < 4)
		
			num = num | 1 << i;

		else if(i > 3 && i < 8)

			num = num & ~(1 << i);

		else if(i > 7 && i < 12)

			num = num ^ 1 << i;

	
	}

	for(int i = 15; i >= 0; i--)

		printf("%d", num >> i & 1);

	printf("\n");
	
	return 0;

}

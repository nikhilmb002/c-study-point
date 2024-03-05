/* write a c program to reverse bits of given character 
 
Ex : input char is 'O' 

it's binary   : 0100 1111

after reverse : 1111 0010
 
*/

#include<stdio.h>

int main(void){

	char c;

	int i, j;

	printf("\nEnter the char : ");

	scanf("%c", &c);

	printf("\nit's binary   : ");

	for(i = 7; i >= 0; i--)

		printf("%d", c >> i & 1);

	for(i = 0, j = 7; j > i; i++, j--){
	
		int m = c >> i & 1;

		int n = c >> j & 1;

		if(m != n){
		
			c = c ^ 1 << i;

			c = c ^ 1 << j;		
		}
	
	}

	printf("\nAfter reverse : ");

	for(i = 7; i >= 0; i--)

		printf("%d", c >> i & 1);

	printf("\n");

	return 0;
}

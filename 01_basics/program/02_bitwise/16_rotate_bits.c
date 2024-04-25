/* write a c program to rotate the bits of given short int num 

Eg: input num is 31, rotate bit is 3

its binary   : 0000 0000 0001 1111

After rotate : 1110 0000 0000 0011 

*/

#include<stdio.h>

int main(void){

	unsigned short int num, n1, n2, n;

	printf("\nEnter the number : ");

	scanf("%hd", &num);

	printf("\nEnter rotation time : ");

	scanf("%hd", &n);

	printf("\nit's binary   : ");

	for(int i = 15; i >= 0; i--)

		printf("%d", num >> i & 1);

	n1 = num << (16-n);

	n2 = num >> n;

	num = n1 | n2;

	printf("\nAfter reverse : ");

	for(int i = 15; i >= 0; i--)

		printf("%d", num >> i & 1);	

	return 0;
}

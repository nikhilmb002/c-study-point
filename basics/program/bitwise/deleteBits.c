/* write a c program to delete no.of bit from particular position in given number 
 
Ex : input  number is 511, bit is 4, pos is 2

00000000 00000000 00000001 11111111

after deleting 4 bit from second postion 

00000000 00000000 00000000 00011111

*/

#include<stdio.h>

int main(void){

	unsigned int num, n1, n2;
	    
	int bit, pos;

	printf("\nEnter the num : ");

	scanf("%d", &num);

	printf("\nEnter the no.of  bit : ");

	scanf("%d", &bit);

	printf("\nEnter the pos : ");

	scanf("%d", &pos);

	printf("\n");

	for(int i = 31; i >= 0; i--)

		printf("%d", num >> i & 1);

	printf("\n");

	n1 = num << (32 - pos);

	n1 = n1 >> (32 - pos);

	n2 = num >> (pos+bit);

	n2 = n2 << (pos);

	num = n1 | n2;

	for(int i = 31; i >= 0; i--)

		printf("%d", num >> i & 1);

	return 0;

}

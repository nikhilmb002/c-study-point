/* c program to convert from little endian to big endian */

/* little endian and big endian are two byte order formats used to store multibyte datatypes in computer memory. In Little endian, the LSB is stored in lowest memory address, while in big endian the MSB is stored at the lowest memory address */

#include<stdio.h>

int main(void){

	unsigned int num = 0x12345678;

	unsigned int n1, n2, n3,n4;

	n1 = (num & 0xff000000) >> 24;

	n2 = (num & 0x00ff0000) >> 8;

	n3 = (num & 0x0000ff00) << 8;

	n4 = (num & 0x000000ff) << 24;

	printf("\nBefore : %x\n", num);

	num = n1 | n2 | n3 | n4;

	printf("\nAfter  : %x\n", num);
	
	return 0;
}

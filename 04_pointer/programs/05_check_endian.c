/* Write a program to prove that we are working in little endian environment, using character pointer */

#include <stdio.h>
int main() {

	int num = 10;
	char *p = &num;

	if (*p == 10) {
	
		printf("Little Endian\n");
	}

	else {
	
		printf("Big Endian\n");
	}
	
	return 0;
}

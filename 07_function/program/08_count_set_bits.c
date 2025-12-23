/* Design a function to count how many bits are set in a given integer number */

#include <stdio.h>
int count_set_bits(int);
void main() {
	
	int num, c;
	printf("Enter the num : ");
	scanf("%d", &num);
	c = count_set_bits(num);
	printf("c = %d\n", c);
}
int count_set_bits(int num) {

	int pos, c = 0;
	for (pos = 0; pos <= 31; pos++) {
		
		if (num >> pos & 1) 
			c++;
	}
	return c;
} 

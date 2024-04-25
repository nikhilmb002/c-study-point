/* write a program in C to delete 3rd bit from the number

  if input : 102 	o/p : 54 

*/


#include<stdio.h>

int main(void){

	unsigned int num, n1, n2;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	n1 = num >> 4;

	n1 = n1 << 3;
	
	n2 = num & 0x07;

	int n3 = n1 | n2;

	printf("\n%d\n", n3);

	return 0;
}

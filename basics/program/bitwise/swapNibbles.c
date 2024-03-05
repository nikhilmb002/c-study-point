/* write a c program for swapping first and last nibbles in given short integer [2 byte] 

  Ex. input num is 63 

  it's binary : 0000 0000 0011 1111

  after swap  : 1111 0000 0011 0000

*/

#include<stdio.h>

int main(void){

	unsigned short int num;

	printf("\nEnter the number : ");

	scanf("%hd", &num);

	printf("\nIt's binary : ");

	for(int i = 15; i >= 0; i--)

		printf("%d", num >> i & 1);

	for(int i = 0, j = 15; i <= 3, j >= 12; i++, j--){
	
		int m = num >> i & 1;

		int n = num >> j & 1;

		if(m != n){
		
			num = num ^ 1 << i;

			num = num ^ 1 << j;		
		}
	
	}

	printf("\nAfter swap  : ");

	for(int i = 15; i >= 0; i--)

		printf("%d", num >> i & 1);

	printf("\n");

	return 0;
}

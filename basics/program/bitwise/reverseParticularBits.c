/* write a c program to reverse first 6 bit to last 6 bit in int 
 
Ex : input number is 995

00000000 00000000 00000011 11100011

after reversing 6 bits only 

11000100 00000000 00000011 11000000

*/

#include<stdio.h>

int main(void){
	
	unsigned int num;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	printf("\n");
	
	for(int i = 31; i >= 0; i--)

		printf("%d", num >> i & 1);

	for(int i = 0, j = 31; i <= 5, j >= 26; j--, i++){
	
		int m = num >> i & 1;

		int n = num >> j & 1;

		if(m != n){
		
			num = num ^ 1 << i;

			num = num ^ 1 << j;		
		}
	
	}

	printf("\n");

	for(int i = 31; i >= 0; i--)

		printf("%d", num >> i & 1);

	printf("\n");


	return 0;

}

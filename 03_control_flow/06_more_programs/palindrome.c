/* write a c program to print and count palindrome number between 51 to 151 */

#include<stdio.h>

int main(void){
	
	int start = 51, end = 151, i, rev, temp, c = 0;

	printf("\n");

	for(i = start; i < end; i++){

		rev = 0;

		temp = i;
	
		while(temp){
			
			rev = rev * 10 + (temp % 10);

			temp /= 10;			
		}

		if(rev == i){

			printf("%d\t", i);	

			c++;
		}
	}

	printf("\n\nCount of palindrome numbers : %d\n\n", c);
	
	return 0;

}

/* write a c program to print odd number between 1 and 50 */

#include<stdio.h>

int main(){

	int i;

	for(i = 1; i < 50; i++){

		if(i % 2 == 0)

			continue;

		printf("%d ", i);

	}
	
	return 0;	
}

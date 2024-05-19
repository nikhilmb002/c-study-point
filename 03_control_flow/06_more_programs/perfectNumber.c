/* write a c program to print perfect number between 1 to 51 */

#include<stdio.h>

int main(void){

	int start = 1, end = 51, i, j, sum;

	for(i = start; i <= end; i++){

		sum = 0;
	
		for(j = 1; j < i; j++){
		
			if(i % j == 0)
				
				sum += j;

		}

		if(sum == i)

			printf("%d\t", i);

	}

	printf("\n");

	return 0;

}

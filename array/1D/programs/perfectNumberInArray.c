/* write a c program print perfect number in an array
 
Ex : i/p : int a[5] = {2, 6, 6, 28, 11};

     o/p : 6 6 6, count = 3

*/

#include<stdio.h>

int main(void){

	int a[10], n, num, i, j, sum, c = 0;

	printf("\nEnter the no.of elements : ");

	scanf("%d", &n);

	for(i = 0; i < n; i++)

		scanf("%d", &a[i]);

	printf("\na[%d] = ", n);

	for(i = 0; i < n; i++)

		printf("%d  ", a[i]);

	printf("\n");

	printf("\nStrong numbers : ");

	for(i = 0; i < n; i++){

		sum = 0;
		
		for(j = 1; j < a[i]; j++){
		
			if(a[i] % j == 0)

				sum += j;
		
		}

		if(sum == a[i]){

			c++;

			printf("%d  ", a[i]);

		}
	}

	printf("\t Count = %d\n", c);

	printf("\n");

	return 0;

}

     

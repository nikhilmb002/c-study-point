/* write a c program to print non repeated elements 
 
  i/p : int a[8] = {1, 1, 2, 3, 5, 2, 1, 7};

  o/p : 3 5 7

*/

#include<stdio.h>

int main(void){

	int a[10], i, j, c, n;

	printf("\nEnter the no.of elements : ");

	scanf("%d", &n);

	for(i = 0; i < n; i++)

		scanf("%d", &a[i]);

	printf("\na[%d] = ", n);

	for(i = 0; i < n; i++)

		printf("%d  ", a[i]);

	printf("\n");

	printf("\n");

	for(i = 0; i < n; i++){

		c = 0;
	
		for(j = 0; j < n; j++){
		
			if(a[i] == a[j])

				c++;		
		}	

		if(c <= 1)

			printf("%d  ", a[i]);
	}

	printf("\n");
}

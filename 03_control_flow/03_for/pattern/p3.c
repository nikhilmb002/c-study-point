/* write a c program to print following pattern 
 

   1 2 3 4 5 6 
   1 2 3 4 5
   1 2 3 4 
   1 2 3
   1 2 
   1 

*/

#include<stdio.h>

int main(){

	int n, i, j;

	printf("\nEnter the no.of rows : ");

	scanf("%d", &n);

	printf("\n");

	for(int i = 0; i < n; i++){
	
		for(j = 0; j < n - i; j++)

			printf("%d ", j+1);

	printf("\n");	
	
	}

	return 0;
}

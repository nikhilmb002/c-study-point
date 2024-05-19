/* write a c program to print the following pattern 
 

   2 
   2 4
   2 4 6
   2 4 6 8
   2 4 6 8 10


*/


#include<stdio.h>

int main(){

	int num, i, j, n;

	printf("\nEnter the no.of rows : ");

	scanf("%d", &n);

	for(i = 0; i < n; i++){

		num = 0;
	
		for(j = 0; j <= i; j++)

			printf("%d ", num += 2);

	
		printf("\n");
	
	}

	return 0;

}

/* write a c program to print the following pattern 

   1
   1 3
   1 3 5
   1 3 5 7


*/

#include<stdio.h>

int main(){

	int n, num;

	printf("\nEnter the no.of rows : ");

	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){

		num = -1;
	
		for(int j = 0; j <= i; j++)

			printf("%d ", num += 2);

		printf("\n");
	
	}

	return 0;
}

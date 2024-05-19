/* write a c program to print the following pattern 

  A
  A *
  A * C
  A * C * 
  A * C * E 

*/

#include<stdio.h>

int main(){

	int n, i, j;

	printf("\nEnter the no. of rows : ");

	scanf("%d", &n);

	for(i = 0; i < n; i++){
	
		for(j = 0; j <= i; j++){

			if(j % 2 != 0)

				printf("* ");

			else
		
				printf("%c ", 'A'+j);

		}
		
		printf("\n");	
	}



}

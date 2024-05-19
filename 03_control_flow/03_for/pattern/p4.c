/* write a c program to print the following pattern 
 
	
   1 3 5 7 9
     3 5 7 9 
       5 7 9 
         7 9
	   9
*/

#include<stdio.h>

int main(){

	int n, i, j, num;

	printf("\nEnter the no.of rows : ");

	scanf("%d", &n);

	for(i = 0; i < n; i++){

		num = 1;
	
		for(j = 0; j < i; j++){

			printf(" ");
			
			num += 2;				
		}
		
		for(j = 0; j < n - i; j++){

			printf("%d", num++);

			num++;

		}

		printf("\n");
	
	}

	return 0;
}

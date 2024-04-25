/* write a c program to scan and print matrix */

#include<stdio.h>

int main(){

	int a[5][5], r, c, i, j;

	printf("Enter the no.of rows : ");

	scanf("%d", &r);

	printf("\nEnter the no.of cols : ");

	scanf("%d", &c);

	for( i = 0; i < r; i++){
		
		for(j = 0; j < c; j++){
		
			printf("\nEnter the %d %d element : " , i, j);

			scanf("%d", &a[i][j]);		
		}	
	}

	 for( i = 0; i < r; i++){

                for(j = 0; j < c; j++)

                        printf("%d ", a[i][j]);

		printf("\n");
        }

	return 0;
}

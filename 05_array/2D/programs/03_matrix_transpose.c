/* c program to print transpose of a matrix */

#include<stdio.h>

int main(void){

	int a[2][3], i, j;

	printf("Enter the elements for 2 x 3 matrix \n");

	for(i = 0; i < 2; i++){
	
		for(j = 0; j < 3; j++){
		
			scanf("%d", &a[i][j]);		
		}	
	}
	
	printf("\nMatrix\n");

	for(i = 0; i < 2; i++){

                for(j = 0; j < 3; j++){

                        printf("%d  ", a[i][j]);
                }

                printf("\n");
        }

	printf("\n");

	printf("\nTranspose\n");
	
	for(i = 0; i < 3; i++){
	
		for(j = 0; j < 2; j++){
			
			printf("%d  ", a[j][i]);					
		}	

		printf("\n");
	}

	return 0;
}

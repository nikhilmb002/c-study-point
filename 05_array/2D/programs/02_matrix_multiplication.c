/* write a c program to perform matrix multiplication */

#include<stdio.h>

int main(){

	int a[5][5], b[5][5], r[5][5], r1, c1, r2, c2, i, j, k;

	printf("Enter the rows and cols of first matrix : ");

	scanf("%d %d", &r1, &c1);

	printf("\nEnter the rows and cols of secnd matrix : ");

	scanf("%d %d", &r2, &c2);

	for(i = 0; i < r1; i++){
	
		for(j = 0; j < c1; j++){
		
			printf("\nEnter the first array %d %d element : ", i, j);

			scanf("%d", &a[i][j]);		
		} 
	}



	for(i = 0; i < r2; i++){

                for(j = 0; j < c2; j++){

                        printf("\nEnter the second array %d %d element : ", i, j);

                        scanf("%d", &b[i][j]);
                } 
        }


	printf("\nfirst matrix\n");

	for(i = 0; i < r1; i++){

                for(j = 0; j < c1; j++)

                        printf("%d ", a[i][j]);

		printf("\n");
        }


	printf("\nSecond matrix\n");

	for(i = 0; i < r2; i++){

                for(j = 0; j < c2; j++)

                        printf("%d ", b[i][j]);

                printf("\n");
        }

	if(c1 == r2){
		
		for(i = 0; i < r1; i++){
		
			for(j = 0; j < c2; j++){
			
				r[i][j] = 0;

				for(k = 0; k < c1; k++)

					r[i][j] += a[i][k] * b[k][j];			
			}		
		}
	
		printf("\nResultant matrix \n");

		for(i = 0; i < r1; i++){
	
			for(j = 0; j < r2; j++)

				printf("%d ",r[i][j]);

			printf("\n");	
		}
	}

	else{
		
		printf("mutiplication not possible \n");

		return 1;	
	}

	return 0;
}

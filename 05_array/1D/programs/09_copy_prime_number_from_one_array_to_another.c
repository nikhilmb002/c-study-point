/* write a c program to copy prime number from one integer array to another integer array */

#include<stdio.h>

int main(){

	int a[10], i, j, b[5], k = 0, flag, n;

	printf("Enter the no.of elements : ");

	scanf("%d", &n);

	printf("\n");

	for(i = 0; i < n; i++){
	
		printf("Enter %d element : ", i);

		scanf("%d", &a[i]);

		printf("\n");	
	}

	for(i = 0; i < n; i++){

		flag = 0;
	
		for(j = 2; j * j <= a[i]; j++){
		
			if(a[i] % j == 0){

				flag = 1;

				break;
			}
		}	
	
		if(flag == 0 && a[i] != 1)

			b[k++] = a[i];			
	}

	for(i = 0; i < k; i++)

		printf("%d ", b[i]);

	printf("\n");

	return 0;
}

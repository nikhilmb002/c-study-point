/* c program to arrange array elements in ascending order using bubble sort technique */

/* Bubble sort is a sorting alogorithm that repeatedly compares and swaps adjacent elements until the entire list is sorted */

#include<stdio.h>

int main(void){

	int a[10], n, i, j, t;

	printf("Enter the no.of elements : ");

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		
		printf("\nEnter the element at %d :  ", i);		

		scanf("%d", &a[i]);	
	}

	printf("\nBefore : a[%d] =  ",n);

	for(i = 0; i < n; i++)

		printf("%d  ", a[i]);

	printf("\n");


	for(i = 0; i < n - 1; i++){
	
		for(j = 0; j < n - 1 - i; j++){
		
			if(a[j] > a[j+1]){
			
				t = a[j];

				a[j] = a[j + 1];

				a[j + 1] = t;				
			}
		}
	}


	printf("\nAfter  : a[%d] =  ", n);

	for(i = 0; i < n; i++)

		printf("%d  ", a[i]);

	printf("\n");

	return 0;
}

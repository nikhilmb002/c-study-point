/* c program to arrange array elements in ascending order using selection sort technique */

/* selection sort is a basic sorting algorithm it repeatedly selects the smallest element from the unsorted part swaps it with the first unsorted element. This process continues until the entire list is sorted */


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
	
		for(j = i + 1; j < n; j++){
		
			if(a[i] > a[j]){
			
				t = a[i];

				a[i] = a[j];

				a[j] = t;				
			}
		}
	}

	printf("\nAfter  : a[%d] =  ", n);

	for(i = 0; i < n; i++)

		printf("%d  ", a[i]);

	printf("\n");

	return 0;
}

/* c program to find largest and second largest element from an integer array */


#include<stdio.h>

int main(void){

	int a[100], n, i;

	printf("Enter the no.of elements : ");
	
	scanf("%d", &n);

	for(i = 0; i < n; i++){

		printf("\nEnter the elements at %d :  ", i);

		scanf("%d", &a[i]);
	}

	printf("\na[%d] = ", n);

	for(i = 0; i < n; i++)

		printf("%d  ", a[i]);

	printf("\n");


	int l = a[0], sl = a[0];
	
	for(i = 1; i < n; i++){
	
		if(a[i] > l){
					
			sl = l;

			l = a[i];				
		}	

		else if(a[i] > sl && a[i] != l)

			sl = a[i];
	}

	printf("\nLargest = %d", l);

	printf("   Second Largest = %d\n", sl);

	return 0;

}

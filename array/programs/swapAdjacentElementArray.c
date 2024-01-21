/* c program to swap adjacent element of a given array of ten integers */

#include<stdio.h>

int main(void){

	int a[10], ele, i, t;

	ele = sizeof(a) / sizeof(a[0]);

	for(i = 0; i < ele; i++){
		
		printf("\nEnter element at %d : ", i);

		scanf("%d", &a[i]);

	}
	
	printf("\nBefore : a[%d] = ", ele);

	for(i = 0; i < ele; i++)

		printf("%d  ", a[i]);

	for(i = 0; i < ele; i += 2){
	
		t = a[i];

		a[i] = a[i + 1];
		
		a[i + 1] = t;

	}

	printf("\nAfter  : a[%d] = ", ele);

	for(i = 0; i < ele; i++)

		printf("%d  ", a[i]);

	printf("\n");

	return 0;

}

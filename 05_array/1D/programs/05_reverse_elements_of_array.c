/* c program to reverse the elements of an array which contains ten integers */

#include<stdio.h>

int main(void){

	int a[10], ele, i, j, t;

	ele = sizeof(a) / sizeof(a[0]);

	for(i = 0; i < ele; i++){

		printf("\nEnter element at %d : ", i);

		scanf("%d", &a[i]);
	}

	printf("\nBefore : ");

	printf("a[%d] = ", ele);

	for(i = 0; i < ele; i++)

		printf("%d  ", a[i]);

	printf("\n");


	for(i = 0, j = ele - 1; i < j; i++, j--){
	
		t = a[i];

		a[i] = a[j];

		a[j] = t;	
	}


	printf("\nAfter  : ");

	printf("a[%d] = ", ele);

	for(i = 0; i < ele; i++)

		printf("%d  ", a[i]);

	printf("\n");

	return 0;
}

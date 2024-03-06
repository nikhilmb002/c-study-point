/* c program to reverse print an array */

#include<stdio.h>

int main(void){

	int a[5] = {10, 20, 30, 40, 50};

	int ele, i;

	ele = sizeof(a) / sizeof(a[0]);	 // calculating no.of elements
					
	for(i = ele - 1; i >= 0; i--)
		
		printf("%d  ", a[i]);

	printf("\n");

	return 0;
}

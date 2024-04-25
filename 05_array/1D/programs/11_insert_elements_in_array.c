/* write a c program to insert an element at desired position in an array 

Ex : i/p :   int a[6] = {2, 3, 4, 5, 6};	pos = 1, num = 9; 

     o/p : 2 9 3 4 5 6

*/

#include<stdio.h>

int main(void){
	
	int a[10], num, pos, i, n;

	printf("\nEnter the no.of elements : ");

	scanf("%d", &n);

	printf("\nEnter the elements : ");

	for(i = 0; i < n; i++)

		scanf("%d", &a[i]);

	printf("\nEnter the pos  : ");

	scanf("%d", &pos);

	if(pos < 0 || pos >= n){

		printf("\nInvalid position\n");

		return 1;

	}

	printf("\nEnter the number : ");

	scanf("%d", &num);

	printf("\n");

	for(i = 0; i < n; i++)

		printf("%d\t", a[i]);

	for(i = n; i > pos; i--)
	
		a[i] = a[i - 1];

	a[pos] = num;

	n++;

	printf("\n");

	for(i = 0; i < n; i++)

		printf("%d\t", a[i]);


	printf("\n");	

	return 0;

}

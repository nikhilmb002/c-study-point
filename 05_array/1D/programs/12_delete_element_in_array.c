/* write a program in c to delete a element at desired position from an array 

Ex : input  : int a[6] = {2, 3, 4, 5, 6, 7};	pos = 2

output : 2 3 5 6 7 
 
*/

#include<stdio.h>

int main(void){
	
	
	int a[10], n, i, pos;

	printf("\nEnter the no.of elements  : ");

	scanf("%d", &n);

	printf("\nEnter the array elements\n");

	for(i = 0; i < n; i++)

		scanf("%d", &a[i]);

	printf("\nEnter the pos : ");

	scanf("%d", &pos);

	if(pos < 0 || pos >= n){

		printf("\nInvalid position\n");

		return 1;

	}

	for(i = pos; i < n - 1; i++){
	
		a[i] = a[i+1];
	
	}

	n--;

	printf("\n");

	for(i = 0; i < n; i++)

		printf("%d\t", a[i]);


	printf("\n");

	return 0;

}



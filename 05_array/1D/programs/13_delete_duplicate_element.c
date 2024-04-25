/* write a program in c to delete duplicate element of array 
 
Ex : i/p : int a[7] = {2, 2, 2, 3, 3, 3, 4};	

     o/p : 2 3 4 

*/

#include<stdio.h>

int main(void){

	
	int a[10], i, j, k, n;  

	printf("\nEnter the no.of elements : ");

	scanf("%d", &n);

	printf("\nEnter the elements : ");

	for(i = 0; i < n; i++)

		scanf("%d", &a[i]);

	printf("\na[%d] = ", n);

	for(i = 0; i < n; i++)

		printf("%d  ", a[i]);

	printf("\n");

	for(i = 0; i < n; i++){
	
		for(j = i + 1; j < n; ){
		
			if(a[i] == a[j]){
			
				for(k = j; k < n - 1; k++)

					a[k] = a[k+1];
				n--;

			}

			else
				j++;
			
			
		}
	}
	
	printf("\na[%d] = ", n);

	for(i = 0; i < n; i++)

		printf("%d  ", a[i]);

	printf("\n");
	
	return 0;

}

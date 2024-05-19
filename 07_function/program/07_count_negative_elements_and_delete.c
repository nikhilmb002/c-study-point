/* write a program in c using function to count -ve element (bitwise op) and delete -ve elements in an array 
 
Ex: input  : a[6] = {-2, 2, -5, -12, 5, -7};

    output : negative number count = 4;

    	   a[2] = {2, 5};

*/

#include<stdio.h>

int count_del_fun(int *a, int *n){

	int count = 0;

	for(int i = 0; i < *n; i++){
	
		if((a[i] >> 31 & 1) == 1){
				
			for(int j = i; j < *n; j++){
			
				a[j] = a[j+1];			

			}		

			(*n)--;

			i--;

			count++;
		} 	
	
	}

	printf("\nnegative number count = %d\n", count);
}

int main(void){
	
	int a[10], n;

	printf("\nEnter the no. of elements : ");

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
	
		printf("\nEnter the %d element : ", i);

		scanf("%d", &a[i]);	
	}

	printf("\na[%d] = ", n);

	for(int i = 0; i < n; i++)

		printf("%d ", a[i]);

	count_del_fun(a, &n);

	printf("\na[%d] = ", n);

	for(int i = 0; i < n; i++)

		printf("%d ", a[i]);

	printf("\n");

	return 0;
}

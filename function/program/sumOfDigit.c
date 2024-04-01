/* write a c program to sum of digit of all elements in array, store results in another array
 
Ex : input  : int a[6] = {1, 22, 121, 34, 78, 444};

     output : int b[6] = {1, 4, 4, 7, 15, 12}; 
*/

#include<stdio.h>

void sum_fun(int *a, int *b, int n){

	int dig;

	for(int i = 0; i < n; i++){
	
		int num = a[i];

		dig = 0;
	
		while(num){
			
			dig  += num % 10;
				
			num /= 10;
		}

		b[i] = dig;
	}

}

int main(void){

	int a[10], b[10], n;

	printf("\nEnter the no.of elements : ");

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
	
		printf("\nEnter the %d element : ", i);

		scanf("%d", &a[i]);	
	}

	printf("\na[%d] = ", n);

	for(int i = 0; i < n; i++)

		printf("%d ",a[i]); 

	printf("\n");

	sum_fun(a, b, n);

	printf("\nb[%d] = ", n);

	for(int i = 0; i < n; i++)

		printf("%d ", b[i]);

	printf("\n");

	return 0;
}

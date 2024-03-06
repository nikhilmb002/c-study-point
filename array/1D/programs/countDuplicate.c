/* write a c program to count duplicate elements in an array 
 
Ex: i/p : int a[8] = {1, 1, 2, 3, 2, 2, 1, 7};

    o/p : 1 -> 3 times, 2 -> 3 times

*/


#include<stdio.h>

int main(void){

	int a[10], n, i, j, c, k, t;

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

		c = 0;
	
		for(j = i + 1; j < n; ){
		
			if(a[i] == a[j]){
				
				c++;

				t = a[i];

				for(k = j; k < n - 1; k++)

					a[k] = a[k+1];			

				n--;
			}	

			else

				j++;	
		}

		if(c >= 1)	

			printf("%d -> %d times, ", a[i], c+1);
	}

	printf("\n");
}

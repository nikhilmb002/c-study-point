/* write a program in c using function to count strong and armstrong number elements in array.
 
Ex : input  : a[6] = {2, 153, 145, 2, 3, 153};

     output :    strong number count  = 3

     	      armstrong number count = 5
*/

#include<stdio.h>

int armstrong_fun(int *a, int n){

	int num, rem, pow, c, count = 0, sum;

	for(int i = 0; i < n; i++){
		
		num = a[i];

		sum = 0;

		c = 0;

		while(num){

			c++;

			num /= 10;			
		}

		num = a[i];

		while(num){

			pow = 1;
		
			rem = num % 10;

			for(int j = 0; j < c; j++){
			
				pow = pow * rem;
			}		
			
			sum += pow;
			
			num /= 10;
		
		}

		if(sum == a[i])

			count++;	
	}

	return count;
}

int strong_fun(int *a, int n){

	int num, rem, fact, sum, c = 0;

	for(int i = 0; i < n; i++){
	
		num = a[i];

		sum = 0;
		
		while(num){

			fact = 1;
		
			rem = num % 10;

			for(int j = 1; j <= rem; j++){
			
				fact = fact * j;
			
			}

			sum += fact;
			
			num /= 10;
		}

		if(sum == a[i])

			c++;
	}
		
	return c;
}

int main(void){

	int a[10], n;

	printf("\nEnter the no.of elements : ");

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
	
		printf("\nEnter the %d element : ", i);

		scanf("%d", &a[i]);
	
	}

	printf("\na[%d] = ", n);

	for(int i = 0; i < n; i++)

		printf("%d ", a[i]);

	printf("\n");

	int count_strong  = strong_fun(a, n);

	int count_armstrong = armstrong_fun(a, n);

	printf("\nstrong number count = %d\n", count_strong);

	printf("\narnstrong number count = %d\n", count_armstrong);

	return 0;
}

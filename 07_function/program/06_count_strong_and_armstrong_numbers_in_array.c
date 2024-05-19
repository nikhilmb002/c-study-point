/* write a program in c to count strong and armstrong number elements in an array 
 
ex : input  : int a[6] = {2, 153, 145, 2, 3, 153};

     output : strong number count = 3

     	      armstrong number count = 5

*/

#include<stdio.h>

int strong_fun(int *a, int n){

	int i, num, sum, fact, dig, count = 0;

	for(i = 0; i < n; i++){

		sum = 0;
	
		num = a[i];

		while(num){

			fact = 1;
		
			dig = num % 10;

			for(int j = 1; j <= dig; j++){
			
				fact = fact * j;
	
			}

			sum += fact;

			num /= 10;		
		}

		if(sum == a[i])

			count++;
	}

	return count;
}


int armstrong_fun(int *a, int n){

	int num, i, dig, pow, c, sum, count = 0;

	for(i = 0; i < n; i++){
	
		num = a[i];

		c = 0, sum = 0;

		while(num){

			c++;

			num /= 10;
		}

		num = a[i];

		while(num){
		
			dig = num % 10;

			pow = 1;

			for(int j = 0; j < c; j++){
			
				pow *= dig;
			
			}

			sum += pow;

			num /= 10;
		}
		
		if(sum == a[i])

			count++;	
	}

	return count;
}


int main(){

	int n, a[10], ca, cs;

	printf("\nEnter the no.of elements : ");

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
	
		printf("\nEnter %d element : ", i);

		scanf("%d", &a[i]);
	}

	printf("\na[%d] = ", n);

	for(int i = 0;  i < n; i++)

		printf("%d ", a[i]);

	printf("\n");

	cs = strong_fun(a, n);

	ca = armstrong_fun(a, n);

	printf("\nstrong number count = %d\n", cs);

	printf("\narmstrong number count = %d\n", ca);

	return 0;
}





















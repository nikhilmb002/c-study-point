/* write a c program in cusing recursive function to product of digit factor of 3 given any int number 
 
Ex : input : n = 345638		output : product = 54

*/


#include<stdio.h>

int rec_fun_product(int num){

	if(num == 0)

		return 1;

	int rem = num % 10;

	if(rem % 3 == 0 && rem != 0)

		return rem * rec_fun_product(num / 10);
	else

		return rec_fun_product(num / 10);
}

int main(){

	int num, product;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	product = rec_fun_product(num);

	printf("\nproduct = %d\n", product);

	return 0;
}



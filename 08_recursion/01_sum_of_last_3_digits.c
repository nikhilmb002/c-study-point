/* write a c program using recursive function to sum of last n digits of given any int number 
 
Ex: input : 23456	output : sum = 15

*/

#include<stdio.h>

int rec_fun_sum(int num, int count){

	if(count != 0){
	
		return (num % 10) + rec_fun_sum(num/10, count - 1);	
	}

	else
		return 0;
}

int main(){

	int num, count, sum;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	printf("\nEnter the count : ");

	scanf("%d", &count);

	sum = rec_fun_sum(num, count);

	printf("\nsum = %d\n", sum);

	return 0;
}

/* write a c program using recurrsive function to sum of even digits of any int number 
 
Ex: input : num = 2345		ouput : sum = 6

*/

#include<stdio.h>

int rec_fun_sum(int num){

	int rem;

	rem = num % 10;

	if(num == 0)

		return 0;

	if(rem % 2 == 0)

		return rem + rec_fun_sum(num / 10);

	else

		return rec_fun_sum(num/10);
}

int main(){

	int num, s;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	s = rec_fun_sum(num);

	printf("\nsum = %d\n", s);

	return 0;
}



/* write a c program using recursive function to count digit less than six of given any int number 
 
Ex: input : 2658942	ouput :  count = 4

*/

#include<stdio.h>

int rec_fun_count(int num){

	int rem, c = 0;

	rem = num % 10;

	if(num == 0)

		return 0;

	if(rem < 6){

		c++;
       
		return c + rec_fun_count(num / 10);
	}

	else

		return rec_fun_count(num / 10);

}

int main(){

	int num, c;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	c = rec_fun_count(num);

	printf("\nCount = %d\n", c);

	return 0;
}

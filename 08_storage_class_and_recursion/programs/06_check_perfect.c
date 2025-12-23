/* write a c program using recursive function to check the given num is perfect or not 
 
Ex: input : num = 6 	output : yes perfect

*/

#include<stdio.h>

int rec_fun_perfect(int num, int i){

	if(i == 1)

		return 1;

	if(num % i == 0)

		return i + rec_fun_perfect(num, i - 1);

	else

		return rec_fun_perfect(num, i - 1);
}

int main(){

	int num, flag;
	
	printf("\nEnter the number : ");

	scanf("%d", &num);

	flag = rec_fun_perfect(num, num/2);

	flag == num ? printf("\nYes perfect\n") : printf("\nNo perfect\n");

	return 0;	
}

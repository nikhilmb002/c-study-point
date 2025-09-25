/* write a c program using recursive function to reverse the number of given any int number 
 
Ex : input : num = 23456	  output : rev = 65432

*/

#include<stdio.h>

int rec_fun_rev(int num){

	static int rev = 0;
	
	if(num == 0)

		return rev;

	else{

		int rem = num % 10;
	
		rev = rev * 10 + rem;
	
		return rec_fun_rev(num / 10);
	}

}

int main(){

	int num, rev;

	printf("\nEnter the number : ");
	
	scanf("%d", &num);

	rev = rec_fun_rev(num);

	printf("\nrev = %d\n", rev);

	return 0;
}

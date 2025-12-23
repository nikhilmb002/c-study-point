/* write a c program using recursion to check the given number is armstrong or not 
 
Ex: num = 153    output : yes armstrong

*/

#include<stdio.h>

int count(int num){

	if(num == 0)

		return 0;
	else
		return 1 + count(num / 10);
}

int power(int rem, int c){

	if(c == 0)

		return 1;

	else{

		return rem * power(rem, c - 1);	
	}

}

int rec_fun_armstrong(int num, int c){

	if(num == 0)

		return 0;

	else{
	
		int rem = num % 10;

		return power(rem, c) + rec_fun_armstrong(num/10, c);
	}


}


int main(){

	int num, flag, c;

	printf("\nEnter the number : ");

	scanf("%d", &num);

	c = count(num);

	flag = rec_fun_armstrong(num, c);

	flag == num ? printf("\nYes armstrong\n") : printf("\nNot armstrong\n");

	return 0;

}


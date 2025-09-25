/* Write a program in c using CLA to print first digit of num 

	input  : ./a.out 1234

	output : 1 
 
*/

#include<stdio.h>

int main(int argc, char **argv){

	if(argc != 2){
	
		printf("\nUsage : ./a.out number\n");

		return 1;	
	}

	int num;

	num = argv[1][0] - 48;

	printf("\n%d\n", num);

	return 0;
}

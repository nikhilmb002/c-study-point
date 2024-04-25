/* write a c program to count the number of postive integers entered by user until a negative number is entered */

#include<stdio.h>

int main(){

	int count = 0;

	int num;

	printf("Enter positive num (negative num to stop) : ");
	
	while(1){
	
		scanf("%d", &num);

		if(num < 0)

			break;	

		count++;
	}

	printf("\npositive num count : %d\n", count);
	
	return 0;
}

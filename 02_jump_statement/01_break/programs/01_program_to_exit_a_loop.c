/* write a c program to exit a loop when a specific number is entered */

#include<stdio.h>

int main(){

	int num;

	while(1){

		printf("Enter 1 to stop \n");

		scanf("%d", &num);

		if(num == 1)

			break;

		printf("\nyou entered  %d\n", num);

	}

	printf("\nExited the loop\n");

	return 0;
}

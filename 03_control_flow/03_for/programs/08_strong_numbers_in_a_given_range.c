/* c program to print strong numbers in a range */

#include<stdio.h>

int main(void){

	int start, end, num, fact, dig, i, sum, temp;

	printf("Enter the start : ");
	
	scanf("%d", &start);

	printf("\nEnter the end   : ");

	scanf("%d", &end);

	printf("\n");

	for(num = start; num <= end; num++){	

		sum = 0;

		for(temp = num; temp != 0; temp /= 10){

			fact = 1;
		
			dig = temp % 10;

			for(i = 1; i <= dig; i++){
			
				fact = fact * i;
			
			}

			sum += fact;		
		}

		if(sum == num)

			printf("%d  ", num);	
	}

	printf("\n");

	return 0;
}

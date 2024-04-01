/* c program to print the armstrong numbers in a given range */

#include<stdio.h>

int main(void){

	int start, end, num, sum, temp, count, dig, pow, i;

	printf("Enter the start : ");

	scanf("%d", &start);

	printf("\nEnter the end : ");

	scanf("%d", &end);

	num = start;

	while(num <= end){
	
		temp = num;

		sum = count = 0;

		while(temp != 0){
	
			temp /= 10;

			count++;
		}

		temp = num;

		i = 0;

		while(temp != 0){
		
			dig = temp % 10;

			pow = 1;

			i = 0;

			while(i < count){
			
				pow *= dig;

				i++;			
			}

			sum += pow;

			temp /= 10;
		}

		if(num == sum){
			
			printf("%d  ",num);
		
		}

		num++;

	}

	return 0;
}

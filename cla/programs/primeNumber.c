/* write a program in c using CLA to prime numbers in a given range 
 
	input  : ./a.out 11 66

	output : 11 13 17 19 23 29 31 37 41 43 47 53 59 61

*/

#include<stdio.h>

#include<stdlib.h>

int main(int argc, char **argv){

	if(argc != 3){
	
		printf("./a.out start_range end_range\n");

		return 1;	
	}

	int start, end, i, j, flag;

	start = atoi(argv[1]);

	end = atoi(argv[2]);

	printf("\n");

	for(i = start; i <= end; i++){

		flag = 0;
	
		for(j = 2; j *j <= i; j++){
		
			if(i % j == 0){
				
				flag = 1;

				break;			
			}
		
		}

		if(flag == 0 && i != 1)

			printf("%d ", i);
	}

	printf("\n");

	return 0;
}

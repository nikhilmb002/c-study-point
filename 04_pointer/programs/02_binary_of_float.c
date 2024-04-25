/* c program to print binary of a float value using character pointer */

#include<stdio.h>

int main(void){

	float f;

	printf("Enter the number : ");

	scanf("%f", &f);

	char *cp;

	int pos;

	cp = (char *)&f;

	for(cp = cp + 3; cp >= (char *)&f; cp = cp - 1){
	
		for(pos = 7; pos >= 0; pos--)

			printf("%d", *cp >> pos & 1);
	
	}
	
	printf("\n");

	return 0;
}

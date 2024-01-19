/* c program to display fibonacci series */

#include<stdio.h>

int main(void){

	int n, f = 0, s = 1, nxt = 0;

	printf("Enter the no. of terms : ");

	scanf("%d", &n);

	printf("\n%d  %d  ", f, s);

	for (int i = 2; i < n; i++){

		nxt = f + s;

		printf("%d  ", nxt);

		f = s;

		s = nxt;
	}

	printf("\n");

	return 0;
}

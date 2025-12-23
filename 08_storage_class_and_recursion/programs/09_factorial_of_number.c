#include <stdio.h>
int fact(int);
int main() {

	int num, fac;
	printf("Enter the number : ");
	scanf("%d", &num);
	fac = fact(num);
	printf("factorial : %d\n", fac);
	return 0;
}

int fact(int n) {

	if (n) 
		
		return n * fact (n - 1);
	else 

		return 1;
		
}

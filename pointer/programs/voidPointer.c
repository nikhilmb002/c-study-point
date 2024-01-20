/* void pointer is also known as generic pointer. Void pointer must be explicitly type cast at the time of dereferencing, otherwise error */


#include<stdio.h>

int main(void){

	char ch = 'a';

	int i = 10;

	float f = 23.5;

	void *p;

	p = &ch;

	printf("%c\n", *(char *)p);	//here it is char pointer 

	p = &i;

	printf("%d\n", *(int *)p);	//here it is int pointer

	p = &f;

	printf("%f\n", *(float *)p);	//here it is float pointer

	return 0;
}

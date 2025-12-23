/* 
	Program : print file content 
	Description : This program prints the content of a given file to standard output (console) 
	Usage : ./a.out filename 
*/



#include <stdio.h>
int main(int argc, char **argv) {

	if (argc != 2) {
		
		printf("Usage : ./a.out filename\n");
		return 1;
	}

	FILE *fp = fopen (argv[1], "r");
	
	if (fp == 0) {

		printf("File is not present\n");
		return 1;
	}
	
	int ch; 
	
	while ((ch = fgetc(fp)) != -1)
		
		printf("%c ", ch);

	printf("\n");
	
	fclose(fp);
	
	return 0;	
}

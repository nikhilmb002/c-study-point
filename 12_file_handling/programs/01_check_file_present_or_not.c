/* 
	Program : File Existence checker 
	Description : This program checks whether a given file exists or not by attempting to open it. 
	Usage : ./program_name filename 
	
 */

#include <stdio.h>
int main(int argc, char **argv) {

	FILE *fp;
	
	if (argc < 2) {
		
		printf("Usage : %s <filename>\n", argv[0]);
		return 1;
	}

	fp = fopen (argv[1], "r");
	
	if (fp == 0) 

		printf("File is not present...\n");
	
	else 
		
		printf("File is present...\n");
}

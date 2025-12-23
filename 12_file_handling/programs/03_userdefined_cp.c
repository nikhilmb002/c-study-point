#include <stdio.h>
int main(int argc, char **argv) {

	if (argc != 3) {

		printf("Usage : ./program_file src_file destfile\n");
		return 1;
	}

	FILE *sf = fopen(argv[1], "r");
	
	if (sf == 0) {

		printf("Source file is not present\n");	
		return 1;
	}

	FILE *df = fopen(argv[2], "w");
	int ch; 

	while ((ch = fgetc(sf)) != -1) {

		fputc(ch, df);
	}

	return 0;
}

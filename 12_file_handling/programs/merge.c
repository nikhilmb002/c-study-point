/* c program to merge char by char in 3rd file 

  ./a.out data1 data2 data3 
 
*/


#include <stdio.h>

#include <stdlib.h>

int main(int argc, char **argv) {

    if (argc != 4) {

        printf("\nusage : ./a.out file1 file2 file3\n");

        exit(0);
    }

    FILE *fp1, *fp2, *fp3;

    fp1 = fopen(argv[1], "r");

    fp2 = fopen(argv[2], "r");

    fp3 = fopen(argv[3], "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {

        printf("\nError with files\n");

        exit(1);
    }

    char ch;

    int flag = 0;
	
    while ((ch = fgetc(fp1)) != EOF) {

  	    putc(ch, fp3);

	    flag = 0;

 	    if((ch = fgetc(fp2)) != EOF){

		    flag = 1;
	
		    fputc(ch, fp3);
	
	    }

    }


    fclose(fp1);

    fclose(fp2);

    fclose(fp3);

    return 0;
}


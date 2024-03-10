/* c program to print all word length 

Ex : input : 123 abc coding

    output : 3   3   6

*/

#include<stdio.h>

int main(){

        FILE *fp;

        char ch;

	int wl = 0;

        fp = fopen("word", "r");

        if(fp == 0){

                printf("\nError in openig the file\n");

                return 1;
        }

        while((ch = fgetc(fp)) != EOF){

                if(ch == ' ' || ch == '\n'){
		
			printf("%d  ", wl);

			wl = 0;
		
		}

		else

			wl++;
        }

	printf("\n");

	fclose(fp);

	return 0;
}



/* c program to convert small to capital letter using fseek() */

#include<stdio.h>

#include<stdlib.h>

int main(){

	FILE *fp;

	fp = fopen("data1.txt", "r+");

	char ch;

	if(fp == NULL){
	
		printf("\nError : Can't open file ...\n");

		exit(0);
	
	}

	fseek(fp, 0, SEEK_SET);


	while((ch = fgetc(fp)) != EOF){
		
		if(ch >= 'a' && ch <= 'z'){
			
			ch = ch - 32;

			fseek(fp, -1, SEEK_CUR);

			fputc(ch, fp);
			
		}	
		
	}	

	
	fclose(fp);

	return 0;
}

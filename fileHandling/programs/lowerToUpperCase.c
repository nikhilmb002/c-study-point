/* write a c program convert small to capital letter using fseek function 

*/

#include<stdio.h>

int main(){

	FILE *fp;

	char ch;

	fp = fopen("convert", "r+");

	if(fp == 0){
	
		printf("\nError opening the file \n");

		return 1;	
	}

	while((ch = fgetc(fp)) != EOF){
	
		if(ch >= 'a' && ch <= 'z'){
		
			fseek(fp, -1, SEEK_CUR);

			fputc(ch - 32, fp);		
		}	
	}

	fclose(fp);

	printf("\nconversion done...\n");

	return 0;
}

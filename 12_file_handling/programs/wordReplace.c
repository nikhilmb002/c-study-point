/* write a c program to replace one word with another word 

./a.out file_name existing_word new_word

*/

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

	if(argc != 4){
	
		printf("\nUsage : ./a.out file_name existing word newword\n");
		
		return 0;
	}

	FILE *fp, *temp;

	char word[100];

	int wordLen = strlen(argv[2]);

	char ch;

	fp = fopen(argv[1], "r");

	if(fp == 0){
	
		printf("\nError in opening the file\n");

		return 1;		
	}

	temp = fopen("temp", "w");

	if(temp == 0){
	
		printf("\nError in temp file \n");

		fclose(fp);

		return 1;	
	}

	while(fscanf(fp, "%s", word) != EOF){
	
		if(strcmp(word, argv[2]) == 0){
				
			fprintf(temp, "%s ", argv[3]);
				
	   	}

		else{
		
			fprintf(temp, "%s ", word);		
		}
	
	}

	fclose(fp);

	fclose(temp);

	remove(argv[1]);

	rename("temp", argv[1]);

	printf("\nWord replaced\n");

	return 0;
}

/* write a c program to delete any line of given file 

./a.out  delete.txt line_no

*/

#include<stdio.h>

#include<stdlib.h>

int main(int argc, char **argv){

	if(argc != 3){
	
		printf("\nUsage : ./a.out file_name line_no");
		
		return 1;
	}
	
	FILE *fp, *temp;

	char ch;

	int count = 0;

	fp = fopen(argv[1], "r");

	if(fp == 0){
		
		printf("\nError in opening file ...\n");

		return 1;	
	}

	temp = fopen("temp.txt", "w");;

	if(temp == 0){
	
		printf("\nError with temp file ...\n");

		fclose(fp);	

		return 1;
	}

	int line_no = atoi(argv[2]);

	while((ch = fgetc(fp)) != EOF){
	
		if(ch == '\n'){
		
			count++;

			if(count != line_no - 1)

				fputc(ch, temp);
		}

		else{
		
			if(count != line_no - 1){
			
				fputc(ch, temp);
			
			}
		
		}
	}

	fclose(fp);

	remove(argv[1]);

	rename("temp.txt", argv[1]);

	printf("\nLine deleted succesfully\n");

	return 0;
}

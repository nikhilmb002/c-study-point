/* c program to count line, word and digit in file 
 
input  : 123 abc coding

         file c ds 789 efghi

output : no.of line = 2, word = 8, digit = 6

*/

#include<stdio.h>

int main(){

	char ch;

        FILE *fp = fopen("count", "r");

        int countL = 0, countD = 0, countW = 0;

        while((ch = fgetc(fp)) != EOF){
	
		if(ch == '\n')

			countL++;

		else if(ch >= '0' && ch <= '9')

			countD++;

		else if(ch == ' ' )

			countW++;
	}

	printf("\nno,of line = %d, word = %d, digit = %d\n", countL, countW+countL, countD);

	return 0;				
}


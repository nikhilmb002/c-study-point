/* write a c program to count duplicate char from string 
 
Ex : input  : s[20] = "aaababcdeb"

     output : a -> 4 times  b -> 3 times

*/

#include<stdio.h>

char * count_duplicate(char *s){

	int i, l = 0, j = 0, c;

	while(s[l++]);

	l--;

	printf("\n");

	for(i = 0; i < l; i++){

		c = 0;
	
		for(j = i + 1; j < l; ){
		
			if(s[i] == s[j]){

				c++;
			
				for(int k = j; k < l; k++)

					s[k] = s[k + 1];								
					l--;
			}

			else
				j++;
		}

		if(c > 1)

			printf("%c -> %d times\t",s[i], c + 1); 
	}

	printf("\n");
}

int main(){

	char s[20];
	
	printf("\nEnter the string : ");

	scanf("%s", s);

	count_duplicate(s);

	return 0;
}

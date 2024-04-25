/* write a c program to sort a string 
 
Ex : input : 615DSppzaA

     ouput : 156ADSappz

*/

#include<stdio.h>

char * sort_string(char *s){

	int i, j, l = 0;

	while(s[l++]);

	l--;

	for(i = 0; i < l - 1; i++){
	
		for(j = 0; j < l - i - 1; j++){
		
			if(s[j] > s[j+1]){
			
				char t = s[j + 1];

				s[j + 1] = s[j];

				s[j] = t;			
			}
		}
	}

	return s;
}

int main(){

	char s[20];

	int i;

	printf("\nEnter the string : ");

	scanf("%s", s);

	sort_string(s);

	printf("\n%s\n", s);

	return 0;
}

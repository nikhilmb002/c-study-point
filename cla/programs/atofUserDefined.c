/* c program of user defined atoi function */

#include<stdio.h>

double my_atof(char *s){

	double num = 0.0, frac = 0.0, mult = 10.0;

	int sf = 0, i = 0;

	if(s[0] == '-'){

		sf = 1;

		i++;
	}

	if(s[0] == '+')

		i++;

	while(s[i] != '.' && s[i] != '\0'){
	
		num = num * 10.0 + (s[i] - 48);

		i++;	
	}

	if(s[i] == '.')
	
		i++;			
	
	while(s[i] != 0){
	
		frac = frac + ((s[i] - 48.0) / mult);

		mult = mult * 10;

		i++;
	
	}
	
	num = num + frac;

	if(sf == 1)

		return -num;

	return num;

}

int main(int argc, char **argv){

	if(argc != 2){
	
		printf("\nUsage : ./a.out exp\n");

		return 1;	
	}

	double num;

	num = my_atof(argv[1]);

	printf("\n%lf\n", num);

	return 0;
}

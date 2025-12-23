/* write a c program user defined strcmp and strncmp */

#include <stdio.h>
int my_strcmp(const char *, const char *);
int my_strncmp(const char *, const char *, size_t);
int main() {

	char s1[10], s2[10];
	printf("Enter the string 1 : ");	
	scanf("%s", s1);
	printf("Enter the string 2 : ");	
	scanf("%s", s2);
	int res = my_strcmp(s1, s2);
	printf("%d\n", res);
	int resncmp = my_strncmp(s1, s2, 3);	
	printf("strncmp (3) : %d\n", resncmp);
	return 0;	
}  

int my_strcmp(const char *s1, const char *s2) {

	while (*s1 && (*s1 == *s2)) {
		
		s1++;
		s2++;
	}
	
	return *s1 - *s2;
}

int my_strncmp(const char *s1, const char *s2, size_t n) {

	size_t i = 0;
	
	while (i < n && *s1 && (*s1 == *s2)) {

		s1++;
		s2++;
		i++;
	}

	if (i == n)
		return 0;	
	
	return *s1 - *s2;	
}

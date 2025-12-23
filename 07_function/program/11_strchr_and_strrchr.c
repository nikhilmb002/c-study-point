#include <stdio.h>
const char *my_strchr(const char *s, int c);
const char *my_strrchr(const char *s, int c);
int main() {

	char s[10], ch; 
	printf("Enter the string : ");
	scanf("%s", s);
	printf("Enter the character : ");
	scanf(" %c", &ch);
	const char *p = my_strchr(s, ch);
	printf("strchr : %p\n", p);
	const char *r = my_strrchr(s, ch);
	printf("strrchr : %p\n", r);
	return 0;
}	

const char *my_strchr(const char *s, int c) {
		
	unsigned char ch = (unsigned char)c;
	
	while (*s) {

		if ((unsigned char)*s == ch) 
			
			return s;
		
		s++;
	}

	if (ch == '\0')
		return s;
	
	return 0;
}

const char *my_strrchr(const char *s, int c) {
	
	unsigned char ch = (unsigned char)c;
	const char *end = s;
	
	while (*end) 
		end++;
	
	do {
		
		if ((unsigned char)*end == ch) 
			return end;

	} while (end-- != s);
	
	return 0;
}














































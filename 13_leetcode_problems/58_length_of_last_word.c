/* 
 Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.

*/

#include <stdio.h>

int lengthOfLastWord(char* s) {

	int i = 0;

	while (s[++i]);

	while (i >0 && s[i - 1] == ' ') 

		i--;

	int l = 0;

	while ( i > 0 && s[i - 1] != ' ') {
		
		l++;
		i--;
	}

	return l;
}

int main() {
	
	int s[50];
	
	printf("Input : ");
	scanf("%s", s);

	int out = lengthOfLastWord(s);
	printf("%d\n", out);

	return 0;
}

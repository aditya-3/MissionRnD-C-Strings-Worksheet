/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdio.h>
#include<conio.h>
int stringLength(char *str)
{
	int len = 0;
	for (int i = 0; str[i] != '\0'; i++)
		len++;
	return len;
}
char KthIndexFromEnd(char *str, int K) {
	int len = 0;
	
	if (str == "" || str == NULL || K <0 )
		return '\0';
	else if (K >= 0)
			len = stringLength(str);
	if (K>len)
		return '\0';
	else if (K == 0)
		return str[len - 1];
	else if (K == len - 1)
		return str[0];
	else
		return str[len - K - 1];
}
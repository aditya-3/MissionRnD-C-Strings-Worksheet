/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stddef.h>
#include<stdio.h>
char *removeSpaces(char *str) {
	
	if (str == "" || str == NULL )
		return '\0';
	else
	{
		int j = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
				str[j++] = str[i];

		}
		str[j] = '\0';
		return str;
	}
}
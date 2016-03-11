/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31
/*int check(char *a, char *b, int i, int j)//function checking each word whether present or not in b
{
	int t = 0, p, r, s;
	while (b[t] != '\0')
	{
		if (b[t + 1] == ' ' || b[t + 1] == '\0' || b[t + 1] == ',' || b[t + 1] == '?' || b[t + 1] == '.' || b[t + 1] == '!')
		{
			p = t;
			r = i;
			s = j;
			while (s >= r)
			{
				if (a[s] == b[t])
				{
					s--;
					t--;
				}
				else break;
			}
			if (r == (s + 1)) return 1;
			t = p;
		}
		t++;
	}
	return 0;
}
char* changelength(char *a, int *len)
{
	*len += 10;
	a = (char *)realloc(a, sizeof(char)*(*len));
	return a;
}
char* wordchecker(char *a, char *b, int len)
{
	int i = 0, j = 0, k = 0, t = 0, existvalue = 0;
	char* op;
	op = (char*)malloc(sizeof(char)*len);
	while (1)
	{
		if (a[i] == ' ' || a[i] == '\0' || a[i] == ',' || a[i] == '.' || a[i] == '?' || a[i] == '!')
		{
			existvalue = check(a, b, t, i - 1);
			if (existvalue)
			{
				existvalue = 0;
				if (k != 0) existvalue = check(a, op, t, i - 1);
				if (existvalue == 0)
				{
					if (k == len) op = changelength(op, &len);
					if (k != 0)
						op[k++] = ' ';
					for (j = t; j<i; j++)
					{
						if (k == len) op = changelength(op, &len);
						op[k++] = a[j];
					}
					if (k == len) op = changelength(op, &len);
					op[k] = '\0';
				}
			}
			t = i + 1;
		}
		if (a[i] == '\0') break;
		i++;
	}
	if (k != 0)
		op = (char*)realloc(op, sizeof(char)*k);
	op[k] = '\0';
	return op;
}*/
char ** commonWords(char *str1, char *str2) {
	return NULL;
	/*char *common, **result;
	int len1 = 0, c = 0,i;
	if (str1 == NULL || str2 == NULL)
		return NULL;
	common = (char *)malloc(100*sizeof(char));
	for (int i = 0; str1[i] != '\0'; i++)
		len1++;
	common = wordchecker(str1, str1, len1);
	for (i = 0; common[i] != '\0'; i++)
	{
		if (common[i] == ' ')
			c++;
	}
	common = (char *)realloc(common, i*sizeof(char));
	for ( i = 0; i < c;i++)
		result[i] = (char *)malloc(SIZE*sizeof(char));
	result = NULL;
	int t = 0,j=0;
	for (i = 0; common[i] != '\0'; i++)
	{
		if (common[i] == ' ')
		{
			common[i + 1] = '\0';
			result[j++] = &common[t];
			t = i + 1;
		}
	}
	result[j++] = &common[t];
	return result;*/

}
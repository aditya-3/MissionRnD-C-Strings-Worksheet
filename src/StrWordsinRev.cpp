/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/

void reversewords(char *a, int i, int j, int key)
{
	char t;
	if (key == 0)//complete string reversal we need to set the boundary conditions to reverse it..
	{
		while (a[j] != '\0')
			j++;
		j--;
	}
	while (j >= i)//swapping the characters from both ends of word and boundary conditions are specified by function arguments...
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}

void sendwords(char *a)
{
	int i = 0, t = 0, p, r = 0;
	while (a[i] != '\0')
	{
		if (a[i] == ' ')
		{
			reversewords(a, t, i - 1, 1);
			t = i + 1;
		}
		i++;
	}
	reversewords(a, t, i - 1, 1);
}

void str_words_in_rev(char *input, int len){
	reversewords(input, 0, 0, 0);
	sendwords(input);
	
}

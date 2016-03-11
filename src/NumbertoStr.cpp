/*
OVERVIEW: Given a float number ,Convert it into a string

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

int conversion(char *str, int n, int index, int i)
{
	int r, m = n;
	char c;
	while (m>0)
	{
		m = m / 10;
		i++;
	}
	m = i;
	if (index == 1)
		i++;
	while (n >= 1 && i >= 0)
	{
		str[i - 1] = (n%10)+'0';
		n = n / 10;
		i--;
	}
	if (index == 1)
	{
		str[i - 1] = '-';
		m++;
	}
	str[m] = '\0';
	return m;
}

void number_to_str(float number, char *str, int afterdecimal){
	int n, i = 0, index = 0,floatToInt;
	float afterDecimalPoint;
	n = (int)number;
	if (n<0)
	{
		n = n*(-1);
		index++;
		afterDecimalPoint = (-number) - n;
	}
	else
		afterDecimalPoint = number - n;
	i = conversion(str, n, index, i);
	if (afterDecimalPoint<1 && afterdecimal>0)
	{
		str[i++] = '.';
		for (int k = 0; k < afterdecimal; k++)
			afterDecimalPoint *= 10;
		floatToInt = (int)afterDecimalPoint;
		i=conversion(str, floatToInt, 0, i);
	}
}




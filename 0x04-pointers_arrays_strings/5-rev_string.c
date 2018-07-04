#include "holberton.h"

/**
 *rev_string - printing a string in reverse
 *@s: Passed in string
 *
 *Return: void
 */

void rev_string(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
		a++;
	if (a != 0)
	{
		for (c = 0; c < (a / 2); c++)
		{
			b = s[c];
			s[c] = s[(a - 1) - c];
			s[(a - 1) - c] = b;
		}
	}
}

#include "holberton.h"

/**
 *print_rev - printing a string in reverse
 *@s: Passed in string
 *
 *Return: void
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
		b = a;
	}
	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}

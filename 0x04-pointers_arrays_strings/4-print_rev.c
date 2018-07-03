#include "holberton.h"

/**
 *print_rev - printing a string in reverse
 *@s: Passed in string
 *
 *Return: void
 */

void print_rev(char *s)
{
	int a;

	a = _strlen(s) -1;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}

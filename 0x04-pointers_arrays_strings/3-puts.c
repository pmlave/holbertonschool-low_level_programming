#include "holberton.h"

/**
 *_puts - printing a string
 *@str: Passed in string
 *
 *Return: Void
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

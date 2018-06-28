#include "holberton.h"
/**
 *print_line - printing a line...
 *@n: passed in number of lines to be printed
 *Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
	for (a = 0; a <= n; a++)
		_putchar('_');
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 *print_diagonal - print diagonal lines
 *@n: passed in number of lines
 *Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}

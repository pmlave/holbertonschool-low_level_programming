#include "holberton.h"
/**
 *print_triangle - printing a triangle with # characters
 *@size: passed in value for size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = a + 1; b < size; b++)
			{
				_putchar(' ');
			}
			for (c = ((b - a) + 1); c <= size; c++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
			}
		}

	else
		_putchar('\n');
}

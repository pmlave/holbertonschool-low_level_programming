#include "holberton.h"

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y > 0; y--)
			{
				if (x < y)
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "holberton.h"
/**
 *print_square - printing # in a certain number
 *@size: passed in size of square
 *Return: void
 */

void print_square(int size)
{

	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "holberton.h"
/**
 *times_table - multiplication table
 *
 *Return: none
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a * b) > 9)
			{
				_putchar('0' + ((a * b) / 10));
				_putchar('0' + ((a * b) % 10));
			}
			else 
			_putchar('0' + (a * b));
			if (b != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

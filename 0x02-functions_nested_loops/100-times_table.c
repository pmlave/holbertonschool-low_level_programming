#include "holberton.h"
/**
 *times_table - multiplication table
 *@n: Passed in value
 *Return: none
 */

void print_times_table(int n)
{
	int a;
	int b;

	if (n >0 && n < 16)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if ((a * b) > 99)
			{
				_putchar('0' + ((a * b) / 100));
				_putchar('0' + (((a * b) / 10)) % 10);
				_putchar('0' + ((a * b) % 10));
			}
			else if (((a * b) > 9) && (a * b) < 100)
			{
				_putchar(' ');
				_putchar('0' + ((a * b) / 10));
				_putchar('0' + ((a * b) % 10));
			}
			else if (((a * b) < 10) || b >= 0)
			{
				if (b > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + (a * b));
			}
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}

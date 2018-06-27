#include "holberton.h"
/**
 *jack_bauer - new function
 *
 *Return: void
 */

void jack_bauer(void)
{
	int a, b, c, d, e, f;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			c = (a / 10);
			d = (a % 10);
			e = (b /10);
			f = (b % 10);
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar(':');
			_putchar('0' + e);
			_putchar('0' + f);
			_putchar('\n');
		}
	}
}

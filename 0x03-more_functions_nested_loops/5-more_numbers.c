#include "holberton.h"
/**
 *more_numbers - printing numbers many times
 *
 *Return: void
 */

void more_numbers(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 00; a <= 14; a++)
		{
			if (a > 9)
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			}
	_putchar('\n');

	}

}

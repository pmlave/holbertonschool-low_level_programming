#include "holberton.h"
/**
 *print_last_digit - gives last digit of passed in number
 *@n: passed in character
 *Description: Does a thing
 *Return: 0
 */

int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (i > 0)
	{
		_putchar('0' + i);
		return (i);
	}
	else
	{
		_putchar('0' + (i * -1));
		return (i * -1);
	}
}

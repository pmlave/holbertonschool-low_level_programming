#include "holberton.h"
/**
 *print_last_digit - gives last digit of passed in number
 *@n: passed in character
 *Return: 0
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	else
	{
		n = (n * -1);
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}

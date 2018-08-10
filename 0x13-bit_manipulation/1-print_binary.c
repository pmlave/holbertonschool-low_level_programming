#include "holberton.h"
/**
 * print_binary - print some number in binary form
 * @n: Given number to print in binary
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int pow = n;

	if (pow > 1)
		print_binary(n >> 1);
	_putchar((pow & 1) + '0');
}

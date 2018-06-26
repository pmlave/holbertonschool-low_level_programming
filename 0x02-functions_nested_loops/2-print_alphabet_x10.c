#include "holberton.h"
/**
 *print_alphabet_x10 - print out certain characters passed in
 *
 *Return: Void, no output
 */

void print_alphabet_x10(void)
{
	int c;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
}

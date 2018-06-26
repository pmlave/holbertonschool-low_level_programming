#include "holberton.h"
/**
 *print_alphabet - allowing our function to be called by main.
 *Return: Void, no return.
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

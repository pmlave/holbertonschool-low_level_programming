#include "holberton.h"

/**
 *puts2 - printing every other character
 *@str: given string of characters
 *
 *Return: void
 */

void puts2(char *str)
{
	int a, b;

	b = 0;
	while (str[b] != '\0')
		b++;
	a = 0;
	while (str[a])
	{
		if (str[a] != '\0')
		{
			if (str[a] % 2 == 0)
			{
				_putchar(str[a]);
				a++;
			}
			else
				a++;
		}
	}
	_putchar('\n');
}

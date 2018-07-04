#include "holberton.h"

/**
 *puts2 - printing every other character
 *@str: given string of characters
 *
 *Return: void
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] != '\0')
		{
			if (str[a] % 2 == 0 || str[0])
			{
				_putchar(str[a]);
			}
		}
		a++;
	}
	_putchar('\n');
}

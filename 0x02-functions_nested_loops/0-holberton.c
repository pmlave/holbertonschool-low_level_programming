#include "holberton.h"
/**
 *main - entry point
 *Return: 0 always
 */

int main(void)
{
	char school[] = "Holberton";
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(school[c]);
	}
	_putchar('\n');
	return (0);
}

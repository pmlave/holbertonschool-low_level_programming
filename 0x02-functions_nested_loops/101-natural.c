#include <stdio.h>
#include "holberton.h"

/**
 *main - entry point
 *Description: Getting all natural numbers that are multiples of 3 or 5
 *Return: 0
 */

int main(void)
{
	int a, b;

	b = 0;
	for (a = 0; a < 1024; a++)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
			b = b + a;
			}
	printf("%i\n", b);
	return (0);




}

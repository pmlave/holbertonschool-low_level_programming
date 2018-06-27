#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - printing all numbers up to 98
 *@n: passed in starting number
 *Return: void
 */

void print_to_98(int n)
{
	int m;

	if (n < 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%i", m);
			if (m != 98)
			{
			printf(", ");
			}
		}
			printf("\n");
	}
	else if (n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			printf("%i", m);
			if (m != 98)
			{
			printf(", ");
			}
		}
			printf("\n");
	}
	else
	{
		printf("%i\n", n);
	}
}

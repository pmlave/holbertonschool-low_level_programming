#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - printing an numbers passed in as arguments
 * @separator: The separator between strings
 * @n: Number of arguments passed in
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i + 1 == n || separator == NULL)
			printf("%u", va_arg(list, unsigned int));
		else
			printf("%u%s", va_arg(list, unsigned int), separator);

	}
	printf("\n");
	va_end(list);
}

#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returning a sum of all parameters
 * @n: Number of arguments being passed in
 * Return: 0 if sum is 0, sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0, i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);
	if (sum == 0)
		return (0);
	return (sum);
}

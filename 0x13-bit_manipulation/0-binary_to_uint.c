#include "holberton.h"
/**
 * binary_to_uint - converting a binary number to uint
 * @b: String filled with 1 or 0 values
 * Return: New unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	int pow = 1;
	unsigned int sum = 0;


	if (!b)
		return (0);
	count = 0;
	while (b[count] != '\0')
		count++;
	count--;
	while (count >= 0)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		if (b[count] == '1')
		{
			sum += pow;
		}
		pow = pow * 2;
		count--;
	}
	return (sum);
}

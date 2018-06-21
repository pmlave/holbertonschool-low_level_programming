#include <stdio.h>
#include <stdlib.h>
/**
 *main -entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

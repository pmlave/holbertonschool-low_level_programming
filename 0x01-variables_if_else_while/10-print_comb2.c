#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
		putchar(a);
		putchar(b);
		if (a == 9 && b == 9)
			break;

		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

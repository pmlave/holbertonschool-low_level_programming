#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

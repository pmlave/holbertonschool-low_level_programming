#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: Command line argument count
 * @argv: Command line argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (!(isdigit(argv[a][b])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	return (0);
}

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
	int a, sum;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			if (isdigit(*argv[a]))
			{
				sum += atoi(argv[a]);
			}
			else if (!(isdigit(*argv[a])))
			{
				printf("Error\n");
				return (1);
			}
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

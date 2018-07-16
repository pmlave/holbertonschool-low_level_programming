#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: Command line argument count
 * @argv: Command line argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum, arg1, arg2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		sum = arg1 * arg2;
		printf("%d\n", sum);
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Elements of array
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	else
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]
							     )));
	return (0);
}

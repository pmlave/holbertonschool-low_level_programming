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
	int total, count;

	total = atoi(argv[1]);
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (total >= 25)
	{
		total -= 25;
		count++;
	}
	while (total >= 10)
	{
		total -= 10;
		count++;
	}
	while (total >= 5)
	{
		total -= 5;
		count++;
	}
	while (total >= 2)
	{
		total -= 2;
		count++;
	}
	while (total >= 1)
	{
		total -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);

}

#include <stdio.h>
/**
 * main - entry point
 * @argc: Command line argument count
 * @argv: Command line argument array
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

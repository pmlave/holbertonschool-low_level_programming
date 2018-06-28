#include <stdio.h>
/**
 *main - entry point
 *Description: Getting fibonacci numbers
 *Return: 0
 */
int main(void)
{
	int long long x, y, z, a;

	x = 0;
	y = 1;
	for (a = 0; a < 50; a++)
	{
		z = x + y;
		if (z < 0)
			z = z * -1;
		printf("%lli", x);
		if (a < 49)
			printf(", ");
		x = y;
		y = z;
	}
	printf("\n");
	return (0);

}

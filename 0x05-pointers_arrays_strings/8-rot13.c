#include "holberton.h"
/**
 * rot13 - rotate by 13 letters
 * @s: given string value
 * Description: Above value
 * Return: pointer to string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *c = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = c[j];
				break;
			}
		}
	}
	return (s);
}

#include "lists.h"
/**
 * print_list - Print the string value and number of nodes
 * @h: Pointer to initial struct
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);

}

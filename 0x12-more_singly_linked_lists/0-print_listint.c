#include "lists.h"
/**
 * print_listint - printing list elements that are numbers
 * @h: Pointer to head node
 * Return: Number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

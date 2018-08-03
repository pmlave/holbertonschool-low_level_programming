#include "lists.h"
/**
 * list_len - returning number of elements
 * @h: Initial pointer to head
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int count;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

#include "lists.h"
/**
 * listint_len - returning the length of the list
 * @h: Pointer to initial node
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

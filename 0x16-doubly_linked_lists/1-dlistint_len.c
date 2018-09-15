#include "lists.h"
/**
 * dlistint_len - returning the number of elements in the list
 * @h: Pointer to head of list
 * Return: The number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{

	const dlistint_t *current = h;
	size_t count = 0;

	if (!h)
		return (0);
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);

}

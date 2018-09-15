#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting a node at an index
 * @h: Pointer to pointer to head node
 * @idx: Index at which to put node
 * @n: Value to place into struct slot
 * Return: Address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new;
	unsigned int counter = 0;

	if (!h)
		return (NULL);
	while (current)
	{
		if (counter == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			if (current->prev)
			{
				current = current->prev;
			}
			new->next = current->next;
			new->prev = current;
			new->n = n;
			current->next = new;
			return (new);
		}
		current = current->next;
		counter++;
	}
	return (NULL);
}

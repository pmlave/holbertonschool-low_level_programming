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
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	for (counter = 0; counter <= idx; counter++)
	{
		if (!idx)
		{
			if (*h)
				current->prev = new;
			new->next = current;
			new->prev = NULL;
			*h = new;
			return (new);

		}
		if (counter + 1 == idx)
		{
			new->next = current->next;
			if (current->next)
				current->next->prev = new;
			current->next = new;
			new->prev = current;
			return (new);
		}
		if (!current->next)
			break;
		current = current->next;
	}
	free(new);
	return (NULL);
}

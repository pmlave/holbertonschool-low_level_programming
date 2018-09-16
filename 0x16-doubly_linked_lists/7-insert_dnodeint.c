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

	if (!h || !*h)
		return (NULL);
	while (counter <= idx)
	{
		if (!idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->next = current;
			current->prev = new;
			new->prev = NULL;
			new->n = n;
			*h = new;
			return (new);

		}
		if (counter + 1 == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->next = current->next;
			if (current->next)
				current->next->prev = new;
			current->next = new;
			new->prev = current;
			new->n = n;
			return (new);
		}
		if (!current->next)
			return (NULL);
		current = current->next;
		counter++;
	}
	return (NULL);
}

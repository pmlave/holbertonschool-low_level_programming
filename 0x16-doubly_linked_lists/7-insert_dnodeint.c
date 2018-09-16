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
	while (counter <= idx)
	{
		if ((!current) && (counter != idx))
			return (NULL);
		if ((!current->next) && (counter + 1 == idx))
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			current->next = new;
			new->next = NULL;
			new->prev = current;
			new->n = n;
		}
		if (counter == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			if (!current->next)
				new->next = NULL;
			else
				new->next = current;
			if (!current->prev)
				*h = new;
			else
				current->prev->next = new;
			new->prev = current->prev;
			new->n = n;
			current->prev = new;
			return (new);
		}
		current = current->next;
		counter++;
	}
	return (NULL);
}

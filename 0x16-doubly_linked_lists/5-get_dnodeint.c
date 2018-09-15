#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at a certain index
 * @head: Pointer to head node
 * @index: Index from which to pull node
 * Return: Node or NULL if DNE
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int node_number = 0;

	if (!head)
		return (NULL);
	while (current)
	{
		if (node_number == index)
			return (current);
		current = current->next;
		node_number++;
	}
	return (NULL);
}

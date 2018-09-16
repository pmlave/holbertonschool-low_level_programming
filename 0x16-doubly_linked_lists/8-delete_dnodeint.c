#include "lists.h"

/**
 * delete_dnodeint_at_index - delete an indexed node
 * @head: Pointer to pointer to head node
 * @index: Node at index to remove
 * Return: 1 for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *removal;
	unsigned int counter = 0;

	if (!head)
		return (-1);
	while (current)
	{
		removal = current->next;
		if ((index == counter) && (!current->prev))
		{
			if (!current->next)
			{
				free(current);
				*head = NULL;
				return (1);
			}
			current->next->prev = NULL;
			free(current);
			*head = removal;
			return (1);
		}
		if ((index == counter) && (!current->next))
		{
			current->prev->next = NULL;
			free(current);
			return (1);
		}
		if (index == counter)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		counter++;

	}
	return (-1);
}

#include "lists.h"
/**
 * delete_nodeint_at_index - deleting a node at an index
 * @head: Pointer to pointer to initial node
 * @index: Index value to delete
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *next;
	unsigned int count = 0;

	if (!head || !(*head))
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (count < index - 1)
	{
		if (!current)
			return (-1);
		current = current->next;
		count++;
	}
	next = current->next;
	current->next = next->next;
	free(next);

	return (1);
}

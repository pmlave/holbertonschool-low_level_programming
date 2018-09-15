#include "lists.h"

/**
 * free_dlistint - Freeing a linked list
 * @head: Pointer to head node
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}


}

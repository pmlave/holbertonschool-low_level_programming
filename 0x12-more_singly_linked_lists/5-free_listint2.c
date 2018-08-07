#include "lists.h"
/**
 * free_listint2 - freeing a list
 * @head: Pointer to pointer of head node
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (!head)
		return;
	while (*head)
	{
		holder = *head;
		*head = holder->next;
		free(holder);
	}
	*head = NULL;
}

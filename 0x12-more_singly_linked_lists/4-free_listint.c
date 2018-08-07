#include "lists.h"
/**
 * free_listint - freeing memory from a list
 * @head: Pointer to initial node
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head)
	{
		holder = head;
		head = holder->next;
		free(holder);
	}
}

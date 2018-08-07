#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: Pointer to pointer to head node
 * Return: Data in int within node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int r = 0;

	if (!head || !(*head))
		return (0);
	tmp = *head;
	*head = tmp->next;
	r = tmp->n;
	free(tmp);

	return (r);
}

#include "lists.h"

/**
 * add_dnodeint_end - adding a node to the end of a linked list
 * @head: Pointer to pointer of head element
 * @n: Value to add into n position in struct
 * Return: Address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (!temp)
	{
		new->next = NULL;
		new->prev = temp;
		new->n = n;
		*head = new;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->next = NULL;
		new->prev = temp;
		new->n = n;
	}
	return (new);
}

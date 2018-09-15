#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: Pointer to pointer to head element
 * @n: Value to insert into the node
 * Return: Pointer to new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (temp)
	{
		temp->prev = new;
	}
	new->next = temp;
	new->prev = NULL;
	new->n = n;
	*head = new;
	return (new);

}

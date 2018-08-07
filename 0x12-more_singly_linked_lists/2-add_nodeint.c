#include "lists.h"
/**
 * add_nodeint - adding a new node at the beginning of the list
 * @head: Pointer to pointer of initial node
 * @n: Int passed in
 * Return: Pointer to first node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = *head;
	tmp = malloc(sizeof(size_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}

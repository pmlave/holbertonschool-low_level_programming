#include "lists.h"
/**
 * insert_nodeint_at_index - inserting a node at a numeric index
 * @head: Pointer to pointer of first node
 * @idx: Index to insert
 * @n: Number to add at index
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *at;
	listint_t *prior;
	unsigned int stop = 0;

	if (!head)
		return (NULL);
	prior = *head;
	at = malloc(sizeof(listint_t));
	if (!at)
		return (NULL);

	if (idx == 0)
	{
		at->n = n;
		at->next = *head;
		*head = at;
		return (*head);
	}
	while (stop < idx - 1)
	{
		if (!prior)
			return (NULL);
		prior = prior->next;
		stop++;
	}

	at->next = prior->next;
	prior->next = at;
	at->n = n;
	return (at);
}

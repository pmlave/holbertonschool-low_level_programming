#include "lists.h"
/**
 * add_nodeint_end - adding a node to the end
 * @head: Pointer to pointer to first node
 * @n: Int being passed in
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *extra;

	extra = *head;
	tmp = NULL;
	tmp = malloc(sizeof(size_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	if (!(*head))
		*head = tmp;
	else
	{
		while (extra->next)
		{
			extra = extra->next;
		}
		extra->next = tmp;
	}
		return (tmp);
}

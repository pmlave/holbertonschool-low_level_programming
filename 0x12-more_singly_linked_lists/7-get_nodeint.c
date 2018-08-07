#include "lists.h"
/**
 * get_nodeint_at_index - getting a specific node
 * @head: Pointer to first node
 * @index: Numeric node to access
 * Return: Node in question
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	if (!head || !index)
		return (NULL);
	node = head;
	while (count < index)
	{
		count++;
		node = node->next;
	}
	return (node);
}

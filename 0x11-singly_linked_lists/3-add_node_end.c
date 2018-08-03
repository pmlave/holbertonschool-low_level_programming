#include "lists.h"
/**
 * add_node_end - adding a node to the end of a list
 * @head: Pointer to first address pointer
 * @str: String to set in struct
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new;
	unsigned int i;

	new = malloc(sizeof(size_t));

	if (!new)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head)
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;
	return (new);
}

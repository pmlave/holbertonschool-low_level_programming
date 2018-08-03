#include "lists.h"
/**
 * add_node - adding a node at the end of a list
 * @head: Pointer to address pointer
 * @str: String to copy
 * Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int i;

	tmp = *head;
	tmp = malloc(sizeof(size_t));
	if (!tmp)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}

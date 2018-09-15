#include "lists.h"

/**
 * sum_dlistint - summing the 'n' values of the list
 * @head: Pointer to first node
 * Return: The sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);

}

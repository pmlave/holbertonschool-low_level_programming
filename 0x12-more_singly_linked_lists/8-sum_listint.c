#include "lists.h"
/**
 * sum_listint - summing list elements
 * @head: Pointer to first node
 * Return: Int sum
 */
int sum_listint(listint_t *head)
{
	listint_t *each;
	int sum = 0;

	if (!head)
		return (0);
	each = head;
	while (each)
	{
		sum += each->n;
		each = each->next;
	}
	return (sum);

}

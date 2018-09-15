#include "lists.h"
/**
 * print_dlistint - printing a doubly linked list
 * @h: Head pointer
 * Return: Count of number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pointing = h;
	size_t count = 0;

	if (!h)
		return (NULL);

	while (pointing)
	{
		printf("%d\n", pointing->n);
		pointing = pointing->next;
		count++;
	}
	return (count);

}

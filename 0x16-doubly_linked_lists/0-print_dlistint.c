#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pointing = h;
	size_t count = 0;

	while (pointing)
	{
		printf("%d\n", pointing->n);
		pointing = pointing->next;
		count++;
	}
	return (count);

}

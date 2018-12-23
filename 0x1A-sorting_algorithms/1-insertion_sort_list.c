#include "sort.h"

/**
 * insertion_sort_list - sort a list using the insertion algorithm
 * @list: Pointer to head node of doubly linked list
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *checker, *current, *forward;

	if (!list || !*list)
		return;

	current = *list;
	while (current->next)
	{
		if (current->next->n < current->n)
		{
			forward = current->next;
			checker = current->prev;
			current->next = forward->next;
			current->prev = forward;
			forward->next = current;
			forward->prev = checker;
			if (checker)
			{
				checker->next = forward;
			}
			else
				*list = forward;
			if (current->next)
				current->next->prev = current;
			if (checker)
				current = checker;
			print_list(*list);
		}
		else
			current = current->next;
	}

}

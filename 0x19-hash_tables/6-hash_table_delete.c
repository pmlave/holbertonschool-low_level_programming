#include "hash_tables.h"

/**
 * hash_table_delete - delete the entire given hash table
 * @ht: The given hash table
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *checker, *prior;

	if (!ht)
		return;

	while (index < ht->size)
	{
		prior = ht->array[index];
		while (prior)
		{
			checker = prior->next;
			free(prior->key);
			free(prior->value);
			free(prior);
			prior = checker;
		}
		index++;
	}

	free(ht->array);
	free(ht);
}

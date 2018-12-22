#include "hash_tables.h"

/**
 * hash_table_print - print the key/value of the table
 * @ht: The given hash table
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *checker;
	int switcher = 0;
	unsigned long int a = 0;

	if (!ht)
		return;

	printf("{");

	while (a < ht->size)
	{
		checker = ht->array[a];
		while (checker)
		{
			/* switcher will always be 0 on the first iteration */
			if (switcher == 1)
				printf(", ");
			printf("'%s': '%s'", checker->key, checker->value);
			/**
			 * set switcher to 1 so that a comma
			 * will print on all iterations after first
			 */
			switcher = 1;
			checker = checker->next;
		}
		a++;
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_get - function that will retrieve the value associated with a key
 * @ht: The hash table to search within
 * @key: The key whose value we are retrieving
 * Return: String of value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ret_val;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ret_val = ht->array[index];
	while (ret_val)
	{
		if (strcmp(ret_val->key, key) == 0)
			return (ret_val->value);
		ret_val = ret_val->next;
	}
	return (NULL);
}

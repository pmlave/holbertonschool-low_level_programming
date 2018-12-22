#include "hash_tables.h"

/**
 * hash_table_set - adding an entry into the hash table
 * @ht: The given hash table
 * @key: The key to the value
 * @value: The value associated with the key
 * Return: 1 if success, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *checker;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[index];
	while (checker)
	{
		if (strcmp(checker->key, key) == 0)
		{
			free(checker->value);
			checker->value = strdup(value);
			return (1);
		}
		checker = checker->next;
	}
	new = new_node(key, value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

/**
 * new_node - function to add new nodes to the hash table
 * @key: Key to add
 * @value: Value to add
 * Return: Pointer to new node
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (!*key)
		return (NULL);
	new->value = strdup(value);
	return (new);

}

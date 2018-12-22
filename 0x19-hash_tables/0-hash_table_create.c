#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table of a given size
 * @size: Size of array to create
 * Return: Pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(size * 8);
	if (!new_table)
		return (NULL);
	return (new_table);


}

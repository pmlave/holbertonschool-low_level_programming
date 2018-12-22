#include "hash_tables.h"

/**
 * key_index - write a function that gives the index of a key
 * @key: Key value given
 * @size: Size of the hash table array
 * Return: Index of key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash % size);
}

#include "hash_tables.h"

/**
 * hash - hash function
 * @str: String passed to function
 * Return: Unsigned long hash
 */

unsigned long hash_djb2(unsigned char *str)
{
        unsigned long hash = 5381;
        int c;

        while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return hash;
}

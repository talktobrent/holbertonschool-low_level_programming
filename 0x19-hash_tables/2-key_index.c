#include "hash_tables.h"

/**
 * key_index - returns index number from a hash
 * @key: key (string) given
 * @size: size of hash table (array)
 * Return: index to use
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}


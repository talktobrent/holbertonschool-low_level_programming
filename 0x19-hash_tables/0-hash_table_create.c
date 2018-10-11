#include "hash_tables.h"

/**
 * hash_table_create - creates an array for a hash table
 * @size: size of array to build
 * Return: pointer to newly created hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
		if (new == NULL)
			return (NULL);
	new->size = size;
	new->array = malloc(sizeof(void *) * size);
		if (new->array == NULL)
			return (NULL);
	return (new);
}

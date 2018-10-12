#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table given
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *run = NULL, *back = NULL;

	if (ht == NULL)
		return;

	for (count = 0; count < ht->size; count++)
	{
		run = ht->array[count];
		while (run != NULL)
		{
			back = run;
			run = run->next;
			free(back->value);
			free(back->key);
			free(back);
		}
	}
	free(ht->array);
	free(ht);
}

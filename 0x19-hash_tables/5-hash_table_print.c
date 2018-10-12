#include "hash_tables.h"

/**
 * hash_table_print - prints a whole hash table
 * @ht: hash table given
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int hit = 0, count = 0;
	hash_node_t *run;

	if (ht != NULL)
	{
		printf("{");
		{
			for (count = 0; count < ht->size; count++)
			{
				run = ht->array[count];
				while (run != NULL)
				{
					if (hit != 0 || run->next != NULL)
						printf(", ");
					printf("'%s': '%s'", run->key,
					run->value);

					hit++;
					run = run->next;
				}
			}
		}
		printf("}\n");
	}

}


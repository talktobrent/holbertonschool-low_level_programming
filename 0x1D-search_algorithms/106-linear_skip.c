#include "search_algos.h"
#include <math.h>
#define STATUS "Value checked at index [%lu] = [%i]\n"
#define FOUND "Value found between indexes [%lu] and [%lu]\n"

/**
 * linear_skip - searches a link list via Skip search
 * @list: list given
 * @value: value to look for
 * Return: node where first value is found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *front, *back = list;

	while (back != NULL)
	{
		front = back->express;
		if (front != NULL)
			printf(STATUS, front->index, front->n);
		if (front == NULL || front->n >= value)
		{
			if (front == NULL)
			{
				front = back;
				while (front->next != NULL)
					front = front->next;
			}
			printf(FOUND, back->index, front->index);
			while (back != NULL && back != front->next)
			{
				printf(STATUS, back->index, back->n);
				if (back->n == value)
					return (back);
				back = back->next;
			}
			return (NULL);
		}
		back = front;
	}
	return (NULL);
}

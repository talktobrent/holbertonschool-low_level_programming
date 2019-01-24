#include "search_algos.h"
#include <math.h>
#define STATUS "Value checked at index [%lu] = [%i]\n"
#define FOUND "Value found between indexes [%lu] and [%lu]\n"

/**
 * jump_list - searches a link list via Jump search
 * @list: list given
 * @size: size of list
 * @value: value to look for
 * Return: index where first value is found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *front = list, *back = list;
	size_t index, jump, lastjump, inc = sqrt(size);

	jump = inc;
	lastjump = 0;
	for (index = 0; front != NULL; index++)
	{
		if (index == jump || front->next == NULL)
		{
			printf(STATUS, index, front->n);
			if (front->n >= value || front->next == NULL)
			{
				printf(FOUND, lastjump, index);
				index = lastjump;
				while (back != front->next)
				{
					printf(STATUS, index, back->n);
					if (back->n == value)
						return (back);
					back = back->next;
					index++;
				}
				return (NULL);
			}
			lastjump = jump;
			jump = index + inc;
			back = front;
		}
		front = front->next;
	}
	return (NULL);
}

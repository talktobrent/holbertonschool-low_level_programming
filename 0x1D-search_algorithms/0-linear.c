#include "search_algos.h"

/**
 * linear_search - searches an array via Linear search
 * @array: array given
 * @size: size of array
 * @value: value to look for
 * Return: index where first value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	while (array != NULL && idx < size)
	{
		printf("Value checked array [%lu] = [%i]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}

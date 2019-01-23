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
	size_t index = 0;

	while (array != NULL && index < size)
	{
		printf("Value checked array[%lu] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}

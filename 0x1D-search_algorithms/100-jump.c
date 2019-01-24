#include "search_algos.h"
#include <math.h>

int jump_search_help(int *array, size_t lo, size_t hi, size_t size, int value);

/**
 * jump_search - searches an array via Jump search
 * @array: array given
 * @size: size of array
 * @value: value to look for
 * Return: index where first value is found
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (jump_search_help(array, 0, sqrt(size), size, value));
}

/**
 * jump_search_help - searches an array via Jump search
 * @array: array given
 * @lo: current lowest index in scope
 * @hi: current highes tindex in scope
 * @size: size of array
 * @value: value to look for
 * Return: index where first value is found
 */

int jump_search_help(int *array, size_t lo, size_t hi, size_t size, int value)
{
	size_t jump = hi - lo;

	printf("Value checked array[%lu] = [%i]\n", lo, array[lo]);

	if (array[lo] == value)
		return (lo);

	if (array[hi] >= value || hi > size - 1)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);
		while (lo <= hi && lo <= size - 1)
		{
			printf(
				"Value checked array[%lu] = [%i]\n"
				, lo, array[lo]);
			if (array[lo] == value)
				return (lo);
			lo++;
		}
	}
	if (hi > size - 1)
		return (-1);
	return (jump_search_help(array, hi, hi + jump, size, value));
}

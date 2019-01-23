#include "search_algos.h"

/**
 * binary_search - searches an array via Binary search
 * @array: array given
 * @size: size of array
 * @value: value to look for
 * Return: index where first value is found
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_help(array, 0, size - 1, value));
}

/**
 * printer - prints current scoped array
 * @array: array given
 * @lo: lowest scoped index
 * @hi: highest scoped index
 */

void printer(int *array, size_t lo, size_t hi)
{
	size_t index;

	printf("Searching in array: ");
	for (index = lo; index <= hi; index++)
	{
		printf("%i", array[index]);
		if (index != hi)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_help - searches a sorted array via Binary search
 * @array: array given
 * @lo: lowest scoped index
 * @hi: highest scoped index
 * @value: value to look for
 * Return: index where first match is found
 */

int binary_search_help(int *array, size_t lo, size_t hi, int value)
{
	size_t half = (lo + hi) / 2;

	printer(array, lo, hi);

	if (hi == lo && array[hi] != value)
		return (-1);
	if (array[half] == value)
		return (half);
	if (array[half] > value)
		return (binary_search_help(array, lo, half - 1, value));
	return (binary_search_help(array, half + 1, hi, value));
}

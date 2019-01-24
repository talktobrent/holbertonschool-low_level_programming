#include "search_algos.h"

int interpolation_search_help(int *array, size_t lo, size_t hi, int value);

/**
 * interpolation_search - searches an array via Interpolation search
 * @array: array given
 * @size: size of array
 * @value: value to look for
 * Return: index where first value is found
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (interpolation_search_help(array, 0, size - 1, value));
}

/**
 * interpolation_search_help - searches a sorted array via Interpolation search
 * @array: array given
 * @lo: lowest scoped index
 * @hi: highest scoped index
 * @value: value to look for
 * Return: index where first match is found
 */

int interpolation_search_help(int *array, size_t lo, size_t hi, int value)
{
	size_t half = lo + (((double)(hi - lo) / (array[hi] - array[lo])) * (
				value - array[lo]));

	printf("Value checked array[%lu]", half);
	if (half > hi)
	{
		printf(" is out of range\n");
		return (-1);
	}
	printf(" = [%i]\n", array[half]);

	if (hi == lo && array[lo] != value)
		return (-1);
	if (array[half] == value)
		return (half);
	if (array[half] < value)
		return (interpolation_search_help(array, half + 1, hi, value));
	return (interpolation_search_help(array, lo, half - 1, value));
}

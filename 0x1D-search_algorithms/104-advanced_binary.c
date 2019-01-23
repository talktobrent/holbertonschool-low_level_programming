#include "search_algos.h"

int advanced_binary_help(int *array, size_t lo, size_t hi, int value);
/**
 * advanced_binary - searches an array via Binary search
 * @array: array given
 * @size: size of array
 * @value: value to look for
 * Return: lowest index where value is found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_help(array, 0, size - 1, value));
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
 * advanced_binary_help - searches a sorted array via Binary search
 * @array: array given
 * @lo: lowest scoped index
 * @hi: highest scoped index
 * @value: value to look for
 * Return: lowest index where first match is found
 */

int advanced_binary_help(int *array, size_t lo, size_t hi, int value)
{
	size_t half = (lo + hi) / 2;

	printer(array, lo, hi);

	if (hi == lo && array[hi] != value)
		return (-1);
	if (array[lo] == value)
		return (lo);
	if (array[half] > value)
		hi = half - 1;
	else if (array[half] < value)
		lo = half + 1;
	else
		hi = half;
	return (advanced_binary_help(array, lo, hi, value));
}

#include "search_algos.h"
#include <math.h>

int exponential_search_help(int *array, size_t lo, size_t hi,
				size_t size, int value);

/**
 * exponential_search - searches an array via Exponential search
 * @array: array given
 * @size: size of array
 * @value: value to look for
 * Return: index where first value is found
 */

int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (exponential_search_help(array, 0, 1, size, value));
}

/**
 * exponential_search_help - searches an array via Exponential search
 * @array: array given
 * @lo: current lowest index in scope
 * @hi: current highest index in scope
 * @size: size of array
 * @value: value to look for
 * Return: index where first value is found
 */

int exponential_search_help(int *array, size_t lo,
				size_t hi, size_t size, int value)
{

	if (hi < size)
		printf("Value checked array[%lu] = [%i]\n", hi, array[hi]);
	if (hi >= size - 1 || array[hi] >= value)
	{
		if (hi > size - 1)
			hi = size - 1;
		if (array[hi] == value)
			return (hi);
		printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);
		return (binary_search_help(array, lo, hi, value));
	}
	return (exponential_search_help(array, hi, hi * 2, size, value));
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

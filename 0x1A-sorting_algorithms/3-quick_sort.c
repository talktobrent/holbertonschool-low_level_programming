#include "sort.h"

void part(int *array, size_t lo, size_t hi, size_t size);

/**
 * quick_sort - quick sort
 * @array: array given
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	part(array, 0, size - 1, size);
}

/**
 * part - quicksort helper
 * @array: array given
 * @lo: lowest index
 * @hi: highest index
 * @size: total size
 */

void part(int *array, size_t lo, size_t hi, size_t size)
{
	int temp, pivot = array[hi];
	size_t run = lo, div = lo;

	while (run <= hi)
	{
		if (array[run] < pivot || run == hi)
		{
			if (div != run && array[div] > array[hi])
			{
				temp = array[div];
				array[div] = array[run];
				array[run] = temp;
				print_array(array, size);
			}
			if (run != hi)
				div++;
		}
		run++;
	}

	if (div > lo + 1)
		part(array, lo, div - 1, size);
	if (div < hi - 1)
		part(array, div + 1, hi, size);
}

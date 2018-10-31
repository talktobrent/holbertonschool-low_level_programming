#include "sort.h"

/**
 * selection_sort - sorts array of integers
 * @array: array given
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t index, run, ilow;
	int low;

	for (index = 0; index < size; index++)
	{
		low = array[index];
		for (run = index + 1; run < size; run++)
		{
			if (array[run] < low)
			{
				low = array[run];
				ilow = run;
			}
		}
		if (low != array[index])
		{
			array[ilow] = array[index];
			array[index] = low;
			print_array(array, size);
		}
	}
}

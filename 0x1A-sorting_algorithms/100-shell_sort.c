#include "sort.h"
#include <stdio.h>

void shell(int *array, size_t reach, size_t size);


/**
 * shell_sort - sorts array with shell sort
 * @array: array of integers
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	size_t test = 0, reach;

	if (size < 2)
		return;

	while (test < size)
		test = (test * 3) + 1;
	reach = (test - 1) / 3;
	shell(array, reach, size);
}

/**
 * shell - shell sort helper
 * @array: array
 * @reach: increment
 * @size: size of array
 */

void shell(int *array, size_t reach, size_t size)
{
	size_t lo = 0, low = lo, next = (reach - 1) / 3, inc = reach;
	size_t current = lo;
	int temp;

	while (reach < size)
	{
		while (reach < size)
		{
			if (array[lo] > array[reach])
			{
				temp = array[reach];
				array[reach] = array[lo];
				array[lo] = temp;
				print_array(array, size);

				if (lo >= inc)
				{
					lo -= inc;
					reach -= inc;
				}
			}
			else if (current != lo)
			{
				reach = current + inc + inc;
				lo = current + inc;
				current = lo;
			}
			else
			{
				current += inc;
				reach += inc;
				lo += inc;
			}
		}

		low++;
		if (inc == 1)
			break;
		reach = low + inc;
		lo = low;

	}
	if (next > 0)
		shell(array, next, size);
}

#include "sort.h"

/**
 * bubble_sort - sorts and array with bubble sort
 * @array: array of ints
 * @size: size of array
 * Description: bubble sorts an array and prints each iteration
 */

void bubble_sort(int *array, size_t size)
{
	size_t end, index = 0;
	int temp;

	end = size - 1;

	while (end != 0)
	{
		while (index < end)
		{
			if (array[index + 1] < array[index])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				print_array(array, size);
			}
			index++;
		}
		index = 0;
		end--;
	}
}


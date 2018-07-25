#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array given
* @size: size of array
* @cmp: pointer to function
* Description: runs function on each array element
* Return: array index of first element which cmp doesn't return 0,
* if no element matches, returns -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) != 0)
			return (count);
	}
	return (-1);
}










#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function on each array element
* @array: array given
* @size: size of array
* @action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (count = 0; count < size; count++)
		action(array[count]);

}










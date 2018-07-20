#include <stdlib.h>
#include <stdio.h>
/**
* array_range - creates array of integers
* @min: lowest integer
* @max: highest integer
* Description: Creates array of size max minus min,
* with min thru max values initialized within
* Return: pointer to array of allocated memory
*/

int *array_range(int min, int max)
{
int *array;
int count;

count = 0;

if (min > max)
	return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	while (count <= max - min)
	{
		array[count] = min + count;
		count++;
	}

return (array);
}



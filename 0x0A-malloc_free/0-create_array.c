#include <stdlib.h>

/**
* create_array - creates array of a character
* @size: size of array
* @c: character to use
* Return: pointer to array, NULL if fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int count;

	count = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	while (count < size)
	{
		array[count] = c;
		count++;
	}

	return (array);
}


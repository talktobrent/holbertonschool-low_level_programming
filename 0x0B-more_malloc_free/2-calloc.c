#include <stdlib.h>

/**
* _calloc - allocates an array to memory, with each value zero'ed out
* @nmemb: elements to allocate
* @size: size of each element
* Return: pointer to array of allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int count;
void *ptr;

count = 0;

if (nmemb == 0 || size == 0)
	return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	while (count < nmemb)
	{
		array[count] = 0;
		count++;
	}

ptr = array;


return (ptr);
}



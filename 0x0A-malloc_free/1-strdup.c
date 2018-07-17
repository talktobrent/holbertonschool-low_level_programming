#include <stdlib.h>
#include "holberton.h"

/**
* _strdup - returns pointer to copy of a string
* @str: string given
* Return: pointer to copy of string, NULL if insufficient memory
*/

char *_strdup(char *str)
{
	char *strptr;
	int count;

	if (str == 0)
		return (NULL);

	for (count = 0; str[count] != '\0'; count++)
	{
	}

	strptr = malloc(sizeof(char) * count);
	if (strptr == NULL)
		return (NULL);

	for (count = 0; str[count] != 0; count++)
		strptr[count] = str[count];

	strptr[count] = 0;

	return (strptr);
}




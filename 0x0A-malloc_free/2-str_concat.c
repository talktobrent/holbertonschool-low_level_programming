#include <stdlib.h>
#include "holberton.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Description: creates new string in memory with combined strings
* Return: pointer to new string in memory, NULL if fails
*/

char *str_concat(char *s1, char *s2)
{
	char *strptr;
	int count;
	int count2;

	if (s1 == NULL)
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	for (count = 0; s1[count] != '\0'; count++)
	{
	}

	for (count2 = 0; s2[count2] != '\0'; count2++)
	{
	}

	strptr = malloc(sizeof(char) * (count + count2 + 2));
	if (strptr == NULL)
		return (NULL);

	for (count = 0; s1[count] != '\0'; count++)
		strptr[count] = s1[count];

	for (count2 = 0; s2[count2] != '\0'; count2++)
		strptr[count + count2] = s2[count2];

	strptr[count + count2] = '\0';

	return (strptr);
}




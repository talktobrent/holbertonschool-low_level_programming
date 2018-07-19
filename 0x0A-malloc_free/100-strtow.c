#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* strtow - splits string into array of words
* @str: string to be split
* Description: creates a 2d array of all words in the string passed
* Return: pointer to new array, NULL if fail
*/


char **strtow(char *str)
{
int count, test, word, x;
char **array;

x = 0;
word = 0;

if (*str == '\0' || str == NULL)
	return (NULL);

	for (count = 0; str[count] != 0; count++)
	{
		if (str[count] != ' ' && (str[count + 1] == '\0' || str[count + 1] != ' '))
			word++;
	}

	array = malloc(sizeof(char *) * word);
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}

	count = 0;
	for (test = 0; str[test] != '\0'; test++)
	{
		while (str[test] != ' ' && str[test] != '\0')
		{
			x++;
			test++;
		}
		if (x > 0)
		{
		array[count] = malloc(sizeof(char) * x + 1);
			if (array[count] == NULL)
			{
				while (count <= 0)
				{
					free(array[count]);
					count--;
					free(array);
					return (NULL);
				}
			}
		count++;
		x = 0;
		}
	}

	count = 0;

	for (test = 0; str[test] != '\0'; test++)
	{
		for (x = 0; str[test] != ' ' && str[test] != '\0'; x++)
		{
			array[count][x] = str[test];
			test++;
		}
		if (x > 0)
		{
			x++;
			array[count][x] = '\0';
			count++;
		}
	}
	return (array);
}

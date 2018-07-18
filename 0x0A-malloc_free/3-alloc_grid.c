#include <stdlib.h>
#include "holberton.h"

/**
* alloc_grid - creates 2 day array
* @width: width
* @height: height
* Description: creates a 2d array from parameters
* Return: pointer to 2d array
*/

int **alloc_grid(int width, int height)
{
	int **aryptr, *string, vert, horz;

	if (width <= 0 || height <= 0)
		return (NULL);

	aryptr = malloc(sizeof(int *) * height);
	if (aryptr == NULL)
	{
		free(aryptr);
		return (NULL);
	}

	for (vert = 0; vert < height; vert++)
	{
		string = malloc(sizeof(int) * width);
		if (string == NULL)
		{
			free(string);
			free(aryptr);
			return (NULL);
		}
		aryptr[vert] = string;
		for (horz = 0; horz < width; horz++)
			aryptr[vert][horz] = 0;

	}
	free(string);
	return (aryptr);
}




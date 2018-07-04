#include <stdio.h>

/**
* print_array - prints elements of an array
* @a: array input
* @n: number of elements to display up to
* Description: displays any number of elements of a given string
*/


void print_array(int *a, int n)
{
int print;

	for (print = 0; print < n; print++)
	{
		printf("%i", a[print]);
		if (print < n - 1)
			printf(", ");
	}

printf("\n");
}


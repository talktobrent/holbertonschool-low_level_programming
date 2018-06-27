#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - print to 98
* @n: starting point for count
*
* Description: count up or down in natural
*numbers to 98,from parameter
*/

void print_to_98(int n)
{

	for (; n < 99; n++)
	{
	if (n != 98)
		printf("%i, ", n);
	else
		printf("%i\n", n);

	}

	for (; n > 99; n--)
	{
	if (n != 98)
		printf("%i, ", n);
	else
		printf("%i\n", n);
	}
}

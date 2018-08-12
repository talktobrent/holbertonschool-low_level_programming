#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - finds endianness
 * Return: 0 if little endian, 1 if big endian
 */


int get_endianness(void)
{
	unsigned long int number = 1;
	char *x;

	x = (char *)&number;

	if (*x == 1)
		return (1);

	return (0);




}

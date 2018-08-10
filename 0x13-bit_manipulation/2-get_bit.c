#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * get_bit - returns value of bit at given index
 * @n: int to look at
 * @index: binary power or place to find
 * Return: value at index, or -1 if error
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if ((n >> index) & 1)
		return (1);

	return (0);

}

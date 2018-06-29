#include "holberton.h"
/**
* print_triangle - prints triangle
* @size: how far over to print
*
* Description: Prints triangle from hashes
*/

void print_triangle(int size)
{
int dist, hash;
if (size > 0)
{
	for (dist = 1; dist <= size; dist++)
	{
		for (hash = 1; hash <=  size; hash++)
		{
		if (hash <= (size - dist))
			_putchar(32);
		else
			_putchar(35);
		}
	_putchar(10);
	}
}
else
_putchar(10);
}

#include "holberton.h"
/**
* print_square - prints square
* @size: square size
*
* Description: Prints square with #
*/

void print_square(int size)
{
int horz, vert;
if (size > 0)
{
	for (vert = 1; vert <= size; vert++)
	{
		for (horz = 1; horz <= size; horz++)
		{
		_putchar(35);
		}
	_putchar(10);
	}
}
else
_putchar(10);
}

#include "holberton.h"
/**
* print_line - prints ____ line
* @n: spaces print
*/

void print_line(int n)
{
int prints;
	if (n > 0)

	for (prints = 1; prints <= n; prints++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

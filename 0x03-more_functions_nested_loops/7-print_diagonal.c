#include "holberton.h"
/**
* print_diagonal - prints diagonal line
* @n: how far over to print
*
* Description: Prints backslashed spaces on new lines to form diagonal
*/

void print_diagonal(int n)
{
int dist, space;
if (n > 0)
{
	for (dist = 1; dist <= n; dist++)
	{
		for (space = 0; space < dist; space++)
		{
		_putchar(' ');
		}
	_putchar(92);
	_putchar(10);
	}
}
else
_putchar(10);
}

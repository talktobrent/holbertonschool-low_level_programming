#include "holberton.h"
/**
* times_table - prints times table
*
* Description: prints 9X table in a grid with even space
*/

void times_table(void)
{

int x, h, v;

for (v = 0; v < 10; v++)
{
	for (h = 0; h < 10; h++)
	{

	x = ((h * v) / 10);
	if (x != 0)
	_putchar(x + '0');
	else
		if (h != 0)
			_putchar(' ');

	x = ((h * v) % 10);
	_putchar(x + '0');


	if (h != 9)
	{
	_putchar(',');
	_putchar(' ');
	}

	}
_putchar('\n');
}

}


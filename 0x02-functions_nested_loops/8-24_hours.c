#include "holberton.h"
/**
* jack_bauer - print every min
*
* Description: prints every min in 24 hours
*/

void jack_bauer(void)
{
	int x, y, a, b, c, d;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			a = x / 10;
			b = x % 10;
			c = y / 10;
			d = y % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar(10);
		}
	}
}







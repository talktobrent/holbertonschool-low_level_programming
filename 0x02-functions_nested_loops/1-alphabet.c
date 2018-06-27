#include "holberton.h"
/**
* print_alphabet - prints zyx...
*
* Description: prints alphabet backwards
*/

void print_alphabet(void)
{
	int x = ('a');
	{
		while (x <= 'z')
		{
		_putchar(x);
		x++;
		}
	}
	_putchar(10);
}

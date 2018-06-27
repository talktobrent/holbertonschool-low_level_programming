#include "holberton.h"
/**
* print_alphabet_x10 - prints alphabet 10x
*
* Description: prints full alphabet 10x on new line
*/


void print_alphabet_x10(void)
{
int t, x;

for (t = 0; t < 10; t++)
	{
	for (x = ('a'); x <= 'z'; x++)
		_putchar(x);

	_putchar(10);
	}


}

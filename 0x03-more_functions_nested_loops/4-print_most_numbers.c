#include "holberton.h"
/**
* print_most_numbers - prints 0-9 except 2 and 4
*/

void print_most_numbers(void)
{
	int zton;

	for (zton = 48; zton < 58; zton++)
	{
		if (zton != 50 && zton != 52)
		_putchar(zton);
	}
	_putchar(10);
}

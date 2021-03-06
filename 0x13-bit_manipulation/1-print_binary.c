#include <stdio.h>
#include "holberton.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - prints an int as binary
 * @n: int given
 */


void print_binary(unsigned long int n)
{
	unsigned long int count, pow;

	count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	pow = 1;

	while (n >= pow && count < 64)
	{
		pow = pow + pow;
		count++;
	}

	if (count == 63)
		pow = ULONG_MAX;

	pow = pow >> 1;
	n = n - pow;
	_putchar('1');

	while (count > 1)
	{
		pow = pow >> 1;
		count--;
		if (n >= pow)
		{
			_putchar('1');
			n = n - pow;
		}
		else
			_putchar('0');
	}

}

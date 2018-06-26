#include "holberton.h"
/**
* print_sign - prints sign of int
* @n: signed integer to be checked
*
* Description: prints + - or 0 and  signed int
* Return: 1 of pos, -1 if neg, 0 if 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

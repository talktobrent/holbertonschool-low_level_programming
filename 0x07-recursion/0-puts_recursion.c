#include "holberton.h"

/**
* _puts_recursion - prints string
* @s: string to be printed
* Description: prints string, followed by new line
*/

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

#include "holberton.h"

/**
* _puts_recursion - prints string
* @s: string to be printed
* Description: prints string, followed by new line
*/

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != 0)
		_puts_recursion(s);
	else
		_putchar(10);
}

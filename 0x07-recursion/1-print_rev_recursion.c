#include "holberton.h"

/**
* _print_rev_recursion - prints string backwards
* @s: string to be printed
* Description: prints string backwards
*/

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}


}


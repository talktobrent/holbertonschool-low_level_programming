#include "holberton.h"
/**
* puts2 - prints every other char
* @str: string to print
* Description: prints every other char in string, starting with first
*/

void puts2(char *str)
{
int count;

count = 1;

while (*str != 0)
{
	str = str + 1;

	if ((count % 2) != 0 && *str != 0)
		_putchar(*str);

	count++;
}
_putchar(10);
}

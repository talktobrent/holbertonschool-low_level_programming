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

	if ((count % 2) != 0)
		_putchar(*str);

	str = str + 1;

	count++;
}
_putchar(10);
}

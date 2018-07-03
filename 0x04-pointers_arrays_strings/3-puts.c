#include "holberton.h"
/**
* _puts - prints string
* @str: string to print
* Description: prints string, plus new line, to stdout
*/

void _puts(char *str)
{

while (*str > 0)
{
	_putchar(*str);
		str = str + 1;
}
_putchar(10);

}


#include "holberton.h"
/**
* print_rev - prints string in reverse
* @str: string to print
* Description: prints string, in reverse, plus new line, to stdout
*/

void print_rev(char *str)
{
int count;
count = 1;

while (*str != 0)
{
	str = str + 1;
	count++;
}
while (count > 0)
{
	_putchar(*str);
	str = str - 1;
	count--;
}

_putchar(10);

}


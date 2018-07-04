#include "holberton.h"
/**
* puts_half - prints half of string
* @str: string to print
* Description: prints latter half of any string
*/

void puts_half(char *str)
{
int count, print;


print = 0; /* counter to print to end of string*/
count = 0; /* counts length of string*/

while (*str != 0)
{
	str = str + 1;
	count++;
}

str = str - count; /*resets location to beginning of string */

if (count % 2 == 0)
{
	while (str[(count / 2 + print)] != 0)
	{
		_putchar(str[(count / 2 + print)]);
		print++;
	}
}
else
{
	while (str[(count + 1) / 2 + print] != 0)
	{
		_putchar(str[(count + 1) / 2 + print]);
		print++;
	}
}
_putchar(10);

}

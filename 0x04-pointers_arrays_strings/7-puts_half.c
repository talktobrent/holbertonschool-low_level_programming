#include "holberton.h"
/**
* puts_half - prints half of string
* @str: string to print
* Description: prints latter half of any string
*/

void puts_half(char *str)
{
int run, count, print;


print = 1; /* counter to print to end of string*/
count = 1; /* counts length of string*/

while (*str > 0)
{
	str = str + 1;
	count++;
}

run = count - 1;  /*stores total length*/
str = str - count; /*resets location to beginning of string */

if (run % 2 == 0)
{
	while (print <= run)
	{
		_putchar(str[(run / 2 + print)]);
		print++;
	}
}
else
{
	while (print <= run)
	{
		_putchar(str[(run - 1) / 2 + print]);
		print++;
	}
}
_putchar(10);

}

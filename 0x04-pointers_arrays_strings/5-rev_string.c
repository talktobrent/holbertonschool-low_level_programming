#include "holberton.h"
/**
* rev_string - reverses string
* @s: string to reverse
* Description: reverses any string
* Return: reversed string
*/

void rev_string(char *s)
{
int run, count, change, hold;


change = 0;
count = 1;
hold = 0;
run = 0;

while (*s > 0)
{
	s = s + 1;
	count++;
}

run = count;
s = s - count;

while (change < run - change)
{
	hold = *(s + count);
	*(s + count) = *(s + change);
	*(s + change) = hold;

	change++;
	count--;
}
}

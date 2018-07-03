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


change = 0; /* moves from front of word in second loop*/
count = 1; /* moves from back of word in second loop*/
hold = 0; /* stores swap value */
run = 0;

while (*s > 0)
{
	s = s + 1;
	count++;
}

run = count;  /*stores total length*/
s = s - count; /*resets location to beginning of string */

while (change < run - change)
{
	hold = *(s + count);
	*(s + count) = *(s + change);
	*(s + change) = hold;

	change++;
	count--;
}
}

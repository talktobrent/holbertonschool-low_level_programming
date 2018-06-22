#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*  main - print hex lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;
	int h;

	x = 48;
	h = 97;

	while (x < 58)
		{
		putchar(x);
		x++;
		}

	while (h < 103)
		{
		putchar(h);
		h++;
		}

	putchar(10);

	return (0);
}










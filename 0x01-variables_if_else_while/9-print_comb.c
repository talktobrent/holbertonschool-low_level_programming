#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - print numbers with commas
* and spaces
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	x = 48;

	while (x < 58)
		{
		putchar(x);
		if (x == 57)
			break;
		putchar(44);
		putchar(32);
		x++;
		}

	putchar(10);

	return (0);
}

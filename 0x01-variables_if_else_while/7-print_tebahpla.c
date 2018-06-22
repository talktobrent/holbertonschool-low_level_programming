#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*  main - print alphabet backward
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	x = 122;

	while (x > 96)
		{
		putchar(x);
		x--;
		}

	putchar(10);

	return (0);
}










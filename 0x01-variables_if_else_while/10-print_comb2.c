#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*  main - print 00-99
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;
	int h;

	x = '0';
	h = '0';

	while (x <= '9')
	{
		h = '0';

		while (h <= '9')
		{
			putchar(x);
			putchar(h);
			if (x == '9' && h == '9')
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			h++;
		}

		x++;
	}

	return (0);
}










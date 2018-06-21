#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*  main - Display last digit of
* random number
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	x = 97;

	while (x < 123)
	{
		if (x == 113 || x == 101)
			x++;
		else
		{
			putchar(x);
			x++;
		}
	}

	putchar(10);

	return (0);
}










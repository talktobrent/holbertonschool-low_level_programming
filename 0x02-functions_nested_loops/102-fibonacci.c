#include <stdio.h>

/**
* main - Prints fibonacci
*
* Description: Prints first 50 fibonacci numbers
* Return: always zero
*/

int main(void)
{
long int t, x, y, z;

x = 0;
y = 1;
	for (t = 0; t < 50; t++)
	{

		z = x + y;
		printf("%li", z);
		x = y;
		y = z;
		if (t != 49)
		{
		printf(", ");
		}
	}
printf("\n");
return (0);
}

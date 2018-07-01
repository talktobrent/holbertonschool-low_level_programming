#include "holberton.h"
/**
* print_number - prints every int
* @n: int given
*
* Description: Prints any int using only _putchar
*/

void print_number(int n)
{
int adjust, neg;

neg = 10;

if (n < 0)
{
	n = n * -1;
	_putchar('-');
	neg = n % 10;
	n = (n / 10);

}

	adjust = 10;

	while (n / adjust >= 10)
		adjust = adjust * 10;



	if (n > 9)
	_putchar((n / adjust) + '0');

	while (adjust >= 10)
	{
		adjust = adjust / 10;
		_putchar(((n / adjust) % 10)  + '0');
	}
	if (neg < 10)
	_putchar(neg + '0');


}

#include "holberton.h"
/**
* more_numbers - prints 0-14 ten times
*/

void more_numbers(void)

{
	int line, fourteen;

	for (line = 0; line < 10; line++)
	{
		for (fourteen = 1; fourteen < 15; fourteen++)
		{
		_putchar(fourteen / 10 + 48);
		_putchar(fourteen % 10 + 48);
		}
	_putchar(10);
	}
}

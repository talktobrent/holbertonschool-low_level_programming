#include "holberton.h"
/**
* more_numbers - prints 0-14 ten times
*/

void more_numbers(void)

{
	int line, fourteen;

	for (line = 0; line < 10; line++)
	{
		for (fourteen = 0; fourteen < 15; fourteen++)
		{
		if (fourteen > 9)
		_putchar(fourteen / 10 + 48);
		_putchar(fourteen % 10 + 48);
		}
	_putchar(10);
	}
}

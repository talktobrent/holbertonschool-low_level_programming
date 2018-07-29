#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - prints any numbers given
* @n: amount of arguments passed
* @separator: char string used to separate output between numbers
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int count;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		if (separator != NULL && count > 0)
			printf("%s", separator);

		printf("%i", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}



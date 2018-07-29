#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - prints strings given
* @separator: char string used to separate output between strings given
* @n: number of strings given
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	char *x;


	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		if (separator != NULL && count > 0)
			printf("%s", separator);

		x = va_arg(args, char *);

		if (x != NULL)
			printf("%s", x);

		else
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}



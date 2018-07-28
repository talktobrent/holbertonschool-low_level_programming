#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_all - prints char, integer, float or strings given
* @format: list of types of arguments passed to function
*/


void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int count, failtest, test, emptytest;
	char *x;

	count = 0;
	failtest = 0;

	va_start(args, format);

	while (format[count] != 0)
	{
		switch (format[count])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%i", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				x = va_arg(args, char *);
				if (x == NULL)
				{
					printf("(nil)");
						break;
				}
				printf("%s", x);
				break;
			default:
				failtest++;
				break;
		}
	count++;
	if (failtest == 0)
	{
		test = 0;
		emptytest = 0;
		while (format[count + test] != 0 && emptytest == 0)
		{
			switch (format[count + test])
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					printf(", ");
					emptytest++;
					break;
				default:
					break;
			}
		test++;
		}
	}
	failtest = 0;
	}

	printf("\n");
	va_end(args);

}



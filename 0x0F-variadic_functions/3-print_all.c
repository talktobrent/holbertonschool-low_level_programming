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
	unsigned int count, fail, test, catch;
	char *x;

	count = 0;
	fail = 0;

	if (format == NULL)
		return;

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
				fail++;
				break;
		}
		count++;
		test = 0;
		catch = 0;
		while (fail == 0 && format[count + test] != 0 && catch == 0)
		{
			switch (format[count + test])
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					printf(", ");
					catch++;
					break;
				default:
					break;
			}
		test++;
		}
	}
	fail = 0;


	printf("\n");
	va_end(args);

}


